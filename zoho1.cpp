#include<bits/stdc++.h>
using namespace std;
int solve(int low,int high,vector<int>&v,int key){
//	cout<<low<<" "<<high<<endl;
	if(low>high) return -1;
	int mid = low+(high-low)/2;
	if(v[mid]==key) return mid;
	if(v[low]<=v[mid]){
		if(key>=v[low] && key<=v[mid]){
			return solve(low,mid-1,v,key);
		}
		return solve(mid+1,high,v,key);
	}
	
	if(key>=v[mid] && key<=v[high]){
		return solve(mid+1,high,v,key);
	}
	return solve(low,mid-1,v,key);
	
}
int main(){
	cout<<"Enter the no of elements in an array:"<<endl;
	int n,element;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	cout<<"Enter element to found:"<<endl;
	cin>>element;
	int ans = solve(0,n-1,v,element);
	cout<<ans;
	
}
// 4 5 6 7 0 1 2
