#include<bits/stdc++.h>
using namespace std;
int search(vector<int> v,int l,int r,int key){
	if(l>r) return -1;
	int mid = (l+r)/2;
	if(v[mid]==key) return mid;
	if(v[l]<=v[mid]){
		if(key>=v[l] && key<=v[mid]){
			return search(v,l,mid-1,key);
		}
		return search(v,mid+1,r,key);
	}
	
	if(key>=v[mid] && key<=v[r]){
		return search(v,mid+1,r,key);
	}
	return search(v,l,mid-1,key);
}
int main(){
	int n,k;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	cin>>k;
	int i = search(v,0,n-1,k);
	if(i==-1){
		cout<<"Not found";
	}
	else{
		cout<<"index: "<<i;
	}
}
