#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&v,int n){
	vector<int>dp(n,0);
	dp[0] = v[0];
	int ans = dp[0];
	int st=0,e=0,t=0;
	for(int i=1;i<n;i++){
		if(v[i]>v[i]+dp[i-1]){
			t = i;
			dp[i] = v[i];
		}
		else{
			dp[i] = v[i]+dp[i-1];
		}
		if(dp[i]>ans){
			ans = dp[i];
			st = t;
			e = i;
		}
	}
	cout<<"Range: "<<st<<"-----"<<e<<endl;
	return ans;
}
int main(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	cout<<solve(v,n);
	return 0;
}
