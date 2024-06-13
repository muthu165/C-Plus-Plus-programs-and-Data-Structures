#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=5;
	string a[n]={"zebra","dolby","king","yamaha","app"};
	string temp;
	for(int i=0;i<=n-1;i++){
		int j=i;
		while(j>0 && (a[j]<a[j-1])){
			temp=a[j];
			a[j]=a[j-1];
			a[j-1]=temp;
			j--;
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
