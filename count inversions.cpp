#include<bits/stdc++.h>
using namespace std;
int merge(int low,int mid,int high,vector<int>&v){
	int c=0;
	int l = low;
	int r = mid+1;
	vector<int>t;
	while(l<=mid && r<=high){
		if(v[l]<=v[r]){
			t.push_back(v[l++]);
		}
		else{
			c += (mid-l+1);
			t.push_back(v[r++]);
		}
	}
	while(l<=mid){
		t.push_back(v[l++]);
	}
	while(r<=high){
		t.push_back(v[r++]);
	}
	for(int i=low;i<=high;i++){
		v[i] = t[i-low];
	}
	return c;
}
int solve(int l,int h,vector<int>&v){
	int c=0;
	if(l>=h) return c;
	int mid = (l+h)/2;
	c+=solve(l,mid,v);
	c+=solve(mid+1,h,v);
	c+=merge(l,mid,h,v);
	return c;
}
int main(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	cout<<solve(0,n-1,v);
	cout<<endl;
	for(int x:v){
		cout<<x<<" ";
	}
	return 0;
}
