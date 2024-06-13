#include<bits/stdc++.h>
using namespace std;
void solve(int ind,vector<int>&v,int &ans,vector<int>&ds,int n,int m,bool mp[]){
	if(ds.size()%2==1 && mp[ds.size()]==0){
		int mid = ds.size()/2;
		if(ds[mid]==m){
			mp[ds.size()]=1;
			ans++;
			for(int x:ds){
				cout<<x<<" ";
			}
			cout<<endl;
		}
	}
	if(ind==n) return;
	ds.push_back(v[ind]);
	solve(ind+1,v,ans,ds,n,m,mp);
	ds.pop_back();
	solve(ind+1,v,ans,ds,n,m,mp);
}
int main(){
	int n,m;
	cin>>n>>m;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
//	sort(v.begin(),v.end());
	bool mp[n]={0};
	int ans=0;
	vector<int>ds;
	solve(0,v,ans,ds,n,m,mp);
	cout<<ans;
	return 0;
}
