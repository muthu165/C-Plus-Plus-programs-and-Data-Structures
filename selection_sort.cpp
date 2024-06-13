#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void selection_sort(int a[],int n){
	for(int i=0;i<=n-2;i++){
		int min=i;
		for(int j=i;j<=n-1;j++){
			if(a[j]<a[min]){
				min=j;
			}	
		}
		int temp=a[i];
			a[i]=a[min];
			a[min]=temp;
	}
}
void bubble_sort(int a[],int n){
	for(int i=n-1;i>=1;i--){
		int didswap=0;
		for(int j=0;j<=i-1;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				didswap=1;
			}
			}
			if(didswap==0){
				break;
		}
		cout<<"i"<<endl;
	}
}

void insertion_sort(int a[],int n){
	int c=0;
	for(int i=0;i<=n-1;i++){
		int j=i;
		while(j>0 && a[j-1]>a[j]){
			int temp=a[j-1];
			a[j-1]=a[j];
			a[j]=temp;
			j--;
			c++;
		}
	}
	cout<<c<<endl;
}
int main(){
	int n;
	cout<<"enter n: ";
	cin>>n;
	int a[n];
	cout<<"enter a[n]: ";
	for(int i=0;i<n;i++) cin>>a[i];
//	selection_sort(a,n);
//	bubble_sort(a,n);
	insertion_sort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
	
}
