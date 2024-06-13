#include<bits/stdc++.h>
using namespace std;
int asc(int a[],int n){
	int c=0;
	bool s=false;
	for(int i=0;i<(n-1);i++){
		
		for(int j=0;j<(n-i-1);j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				s=true;
				c++;
			}
		}
		if(s==false){
			break;
		}
	}
	return c;
}
int desc(int a[],int n){
	int c=0;
	bool s=false;
	for(int i=0;i<(n-1);i++){
		
		for(int j=0;j<(n-i-1);j++){
			if(a[j]<a[j+1]){
				swap(a[j],a[j+1]);
				s=true;
				c++;
			}
		}
		if(s==false){
			break;
		}
	}
	return c;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	int i=0,j=0;
	for(i=0;i<n;i++){
		cin>>a[i];
	}

	int y = desc(a,n);
	int x = asc(a,n);
	cout<<endl<<x<<" "<<y<<endl;
	cout<<min(x,y);
}
