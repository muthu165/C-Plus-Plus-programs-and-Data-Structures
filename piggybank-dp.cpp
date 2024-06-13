#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int e,f,n;
		cin>>e>>f>>n;
		int w = f-e;
		vector<int>dp(w+1,INT_MAX);
		dp[0] = 0;
		for(int i=0;i<n;i++){
			int p,m;
			cin>>p>>m;
			for(int j=m;j<=w;j++){
				if(dp[j-m]!=INT_MAX){
					dp[j] = min(dp[j],dp[j-m]+p);
				}
			}
		}
		if(dp[w]!=INT_MAX){
			cout<<"The min amount in the piggy bank is : "<<dp[w]<<endl;
		}
		else{
			cout<<"This is impossible"<<endl;
		}
	}
}
