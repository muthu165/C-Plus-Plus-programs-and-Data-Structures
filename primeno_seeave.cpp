#include<bits/stdc++.h>
using namespace std;
int main(){
	bool a[20];
	int n=20;
	a[0]=0;
	a[1]=0;
	for(int i=1;i<=n;i++){
		a[i]=1;
	}
	for(int i=2;i*i<=n;i++){
		if(a[i]==1){
			int x = i*i;
			for(int j=x;j<=n;j+=i){
				a[j]=0;
			}
		}
	}
	for(int i=2;i<=n;i++){
		if(a[i]==1){
			cout<<i<<" ";
		}
	}
}
