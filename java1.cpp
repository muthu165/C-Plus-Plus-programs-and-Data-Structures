//package taxiBooking;
//
//public class Taxi implements Cloneable
//{
//	private char currentLocation = 'A';
//	private int customerId;
//	private int taxiId;
//	private char pickupLocation;
//	private char dropLocation;
//	private int pickupTime;
//	private int dropTime;
//	private int earnings;
//	
//	@Override
//	protected Object clone() throws CloneNotSupportedException {
//		return super.clone();
//		
//	}
//	public int getDropTime() {
//		return dropTime;
//	}
//
//	public void setDropTime(int dropTime) {
//		this.dropTime = dropTime;
//	}
//	
//	public int getTaxiId() {
//		return taxiId;
//	}
//
//	public void setTaxiId(int taxiId) {
//		this.taxiId = taxiId;
//	}
//
//	public char getCurrentLocation() {
//		return currentLocation;
//	}
//	public void setCurrentLocation(char currentLocation) {
//		this.currentLocation = currentLocation;
//	}
//	public int getCustomerId() {
//		return customerId;
//	}
//	public void setCustomerId(int customerId) {
//		this.customerId = customerId;
//	}
//	public char getPickupLocation() {
//		return pickupLocation;
//	}
//	public void setPickupLocation(char pickupLocation) {
//		this.pickupLocation = pickupLocation;
//	}
//	public char getDropLocation() {
//		return dropLocation;
//	}
//	public void setDropLocation(char dropLocation) {
//		this.dropLocation = dropLocation;
//	}
//	public int getPickupTime() {
//		return pickupTime;
//	}
//	public void setPickupTime(int pickupTime) {
//		this.pickupTime = pickupTime;
//	}
//	public int getEarnings() {
//		return earnings;
//	}
//	public void setEarnings(int earnings) {
//		this.earnings = earnings;
//	}
//
//	@Override
//	public String toString() {
//		return "Taxi "+getTaxiId()+"\ncurrentLocation=" + currentLocation + ", \ncustomerId=" + customerId + ", \npickupLocation="
//				+ pickupLocation + ", \ndropLocation=" + dropLocation + ", \npickupTime=" + pickupTime + ", \ndropTime="
//				+ dropTime + ", \nearnings=" + earnings + "]";
//	}
//	
//}
//package taxiBooking;
//
//import java.util.ArrayList;
//
//public class TaxiBooking 
//{
//	private static ArrayList<Taxi> taxiList = new ArrayList<Taxi>();
//	private static int taxiListLimit = 4,idGenerator = 1;
//	private static ArrayList<Taxi> taxiBookedHistory = new ArrayList<Taxi>();
//	
//	public static String booking(char pickupLocation, char dropLocation, int pickupTime) throws CloneNotSupportedException
//	{
//		if(taxiList.size()<taxiListLimit)
//		{
//			taxiList.add(new Taxi());
//		}
//		
//		int min = Integer.MAX_VALUE;
//		Taxi taxiReady = null;
//		
//		for(Taxi t : taxiList)
//		{
//			if(t.getDropTime()<=pickupTime && Math.abs(pickupLocation - t.getCurrentLocation()) <= min)
//			{
//				if(Math.abs(pickupLocation - t.getCurrentLocation())==min) 
//				{
//					// if Math.abs(..) is equal to min, the taxi with lowest earnings will be put in taxiReady object
//					if(taxiReady!=null && t.getEarnings()<taxiReady.getEarnings())
//					{
//						taxiReady = t;
//					}
//				}
//				else
//				{
//					taxiReady = t;
//					min = Math.abs(pickupLocation - t.getCurrentLocation());
//				}
//			}
//		}
//		
//		if(taxiReady!=null)
//		{
//			taxiReady.setCustomerId(idGenerator++);
//			taxiReady.setPickupTime(pickupTime);
//			taxiReady.setPickupLocation(pickupLocation);
//			taxiReady.setDropLocation(dropLocation);
//			taxiReady.setCurrentLocation(dropLocation);
//			taxiReady.setDropTime(pickupTime + Math.abs(dropLocation-pickupLocation));
//			taxiReady.setEarnings((taxiReady.getEarnings()) + (Math.abs(dropLocation-pickupLocation)*15-5)*10 + 100);
//			taxiReady.setTaxiId(taxiList.indexOf(taxiReady)+1);
//			taxiBookedHistory.add((Taxi)taxiReady.clone()); //clone object
//		}
//		
//		return taxiReady!=null?"Taxi number "+taxiReady.getTaxiId()+" is booked!":"Taxis not available";
//	}
//
//	public static void display() {
//		
//		System.out.println("-----------------");
//		for(Taxi t : taxiBookedHistory)
//		{
//			System.out.println(t.toString());
//			System.out.println("-----------------");
//		}
//	}
//}
//
//package taxiBooking;
//
//import java.util.Scanner;
//
//public class MainClass 
//{
//	public static void main(String[] args) throws CloneNotSupportedException 
//	{
//		boolean loop = true;
//		
//		while(loop)
//		{
//			System.out.println("Choose any one\n1.Book Taxi\n2.Display Details\n3.Exit");
//			Scanner s = new Scanner(System.in);
//			int n = s.nextInt();
//			
//			switch(n)
//			{
//			case 1:
//			{
//				System.out.println("Enter Pickup Location");
//				char pickupLocation = s.next().charAt(0);
//				System.out.println("Enter Drop Location");
//				char dropLocation = s.next().charAt(0);
//				System.out.println("Enter Pickup Time");
//				int pickupTime = s.nextInt();
//				System.out.println(TaxiBooking.booking(pickupLocation, dropLocation, pickupTime));
//				break;
//			}
//			
//			case 2:
//			{
//				TaxiBooking.display();
//				break;
//			}
//			
//			case 3:
//			{
//				loop = false;
//				System.out.println("\tThank You!!!");
//				s.close();
//				break;
//			}
//			}
//		}
//	}
//}
