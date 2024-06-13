#include<bits/stdc++.h>
using namespace std;
int main(){
	cout<<"Enter the no of elements in an array:"<<endl;
	int n;
	cin>>n;
	vector<int>v(n);
	vector<int>dp(n);
	
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	dp[0] = v[0];
	dp[1] = v[1];
	int k=0;
	while(k<n){
	
	for(int i=k+2;i<n;i++){
		dp[i] = v[k]+v[i];
	}
	k+=2;
}
k=1;
while(k<n){

	for(int i=k+2;i<n;i++){
		dp[i] = max(dp[k],v[k]+v[i]);
	}
	k+=2;
}
	
	cout<<*max_element(dp.begin(),dp.end());
	return 0;
	
}
