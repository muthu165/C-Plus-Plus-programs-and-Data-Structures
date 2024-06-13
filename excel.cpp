#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[1000];
	int i=0;
	while(n){
		a[i] = n%26;
		n = n/26;
		cout<<a[i]<<"-";
		i++;
	}
	cout<<endl;
	for(int j=0;j<i-1;j++){
		if(a[j]<=0){
			a[j] = 26;
			a[j+1] = a[j+1]-1;
		}
		cout<<a[j]<<"-->"<<a[j+1]<<"--";
	}
	cout<<endl;
	for(int j=i;j>=0;j--){
		if(a[j]>0){
			cout<<char('A'+a[j]-1);
		}
	}
}
