#include<bits/stdc++.h>
using namespace std;
void fun(string s,int l,int r,int n){
	if(l>r) return;
	for(int i=0;i<n;i++){
		if(i==l || i==r){
			cout<<s[i];
		}
		else{
			cout<<" ";
		}
	}
	fun(s,l+1,r-1,n);
	if(l==r) return;
	else if(l<r){
		for(int i=0;i<n;i++){
		if(i==l || i==r){
			cout<<s[i];
		}
		else{
			cout<<" ";
		}
	}
	}
}
int main(){
	string s;
	cin>>s;
	int n = s.length();
	fun(s,0,n-1,n);
	return 0;
}
