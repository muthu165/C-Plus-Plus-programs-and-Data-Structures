#include<bits/stdc++.h>
using namespace std;
void ss(int a[],int n){
	for(int i=0;i<=n-2;i++){
		int m=i;
		for(int j=i;j<=n-1;j++){
			if(a[j]<a[m]){
				m=j;
			}
		}
		int temp=a[i];
		a[i]=a[m];
		a[m]=temp;
	}
}
void bs(int a[],int n){
	for(int i=n-1;i>=1;i--){
		for(int j=0;j<=i-1;j++){
			if(a[j]>a[j+1]){
				int t=a[j];
				a[j]=a[j+1];
				a[j=1]=t;
			}
		}
	}
}
void is(int a[],int n){
	for(int i=0;i<n;i++){
		int j=i;
		while(j>0 && a[j-1]>a[j]){
			int t=a[j-1];
			a[j-1]=a[j];
			a[j]=t;
			j--;
		}
	}
}
int main(){
	int n;
	cout<<"n:";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	ss(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
	bs(a,n);
		for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
	is(a,n);
		for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
	return 0;
	
}
