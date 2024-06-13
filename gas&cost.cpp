#include<bits/stdc++.h>
using namespace std;
int main(){
	cout<<"enter value of n: ";
	int n;
	cin>>n;
	int gas[n];
	int cost[n];
	int i=0,j=0;
	cout<<"enter gas value: "<<endl;
	for(i=0;i<n;i++){
		cin>>gas[i];
//		cout<<gas[i]<<" ";
	}
	cout<<"enter cost value: "<<endl;
	for(i=0;i<n;i++){
		cin>>cost[i];
//		cout<<cost[i]<<" ";
	}
	int tgas=0,tcost=0,ind=0,curgas=0;
	for(i=0;i<n;i++){
		tgas+=gas[i];
		tcost+=cost[i];
		curgas+=gas[i]-cost[i];
		if(curgas<0){
			ind=i+1;
			curgas=0;
		}
	}
	int res=(tgas<tcost)?-1:ind;
	cout<<res;
	return 0;
	
}
