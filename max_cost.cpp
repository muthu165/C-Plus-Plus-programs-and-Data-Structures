#include<bits/stdc++.h>
using namespace std;
int main(){
	int c,i;
	cin>>c>>i;
	int a[i],n[i],o[i],s[i];
	for(int j=0;j<i;j++){
		cin>>a[j];
	}
	for(int j=0;j<i;j++){
		cin>>n[j];
	}
	for(int j=0;j<i;j++){
		cin>>o[j];
	}
	for(int j=0;j<i;j++){
		cin>>s[j];
	}
	int maxx=0;
	for(int j=0;j<10;j++){
		for(int k=0;k<10;k++){
			if((j*o[0])+(k*o[1])<=c){
				int x = j/n[0];
				int y = k/n[1];
				int m = x*s[0];
				int nn = y*s[1];
//				cout<<endl<<x<<" "<<y<<endl;
				maxx = max(m+nn,maxx);
			}
		}
	}
//int x=1/n[0];
//int y=6/n[1];
//int m = x*s[0];
//int nn = y*s[1];
//maxx=m+nn;
cout<<maxx;
	
	
	
//	for(int j=0;j<i;j++){
//		cout<<a[j]<<" "<<n[j]<<" "<<o[j]<<" "<<s[j]<<endl;
//	}
	
	
}
