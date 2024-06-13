#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int c;
	cin>>c;
	vector<int>v(c);
	for(int i=0;i<c;i++){
		cin>>v[i];
	}
	int dp[n+1];
	for(int i=0;i<=n;i++){
		dp[i] = INT_MAX;
	}
	dp[0] = 0;
	for(int i=0;i<c;i++){
		for(int j=v[i];j<=n;j++){
			dp[j] = min(dp[j-v[i]]+1,dp[j]);
		}
	}
	cout<<"min coins: "<<dp[n];
}
