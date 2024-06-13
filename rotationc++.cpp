#include<bits/stdc++.h>
using namespace std;
void right(vector<int>&v,int n){
	int temp = v[n-1];
	for(int i=n-1;i>0;i--){
		v[i] = v[i-1];
	}
	v[0] = temp;
}
void left(vector<int>&v,int n){
	int t = v[0];
	for(int i=0;i<n-1;i++){
		v[i] = v[i+1];
	}
	v[n-1] = t;
}
void rotate(vector<int>&v,int k,int n){
	for(int i=0;i<k;i++){
//		right(v,n);
		left(v,n);
	}
}
int main(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int k;
	cin>>k;
	rotate(v,k,n);
	for(int i=0;i<n;i++){
		cout<<v[i];
	}
	return 0;
}
