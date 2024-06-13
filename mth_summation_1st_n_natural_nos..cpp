#include<bits/stdc++.h>
using namespace std;
int sum(int n,int m){
	if(m==1){
		return n*(n+1)/2;
	}
	int x = sum(n,m-1);
//	cout<<x<<endl;
	return x*(x+1)/2 ;
}
int main(){
	int n=5;
	int m = 3;
	cout<<sum(n,m);
}
