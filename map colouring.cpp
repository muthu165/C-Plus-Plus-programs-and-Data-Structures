#include<bits/stdc++.h>
using namespace std;
bool safe(int node,int col,vector<int>&color,vector<vector<int>>&v,int n){
	for(int k=0;k<n;k++){
		if(k!=node && v[node][k]==1 && color[k] == col) return false;
	}
	return true;
}
bool solve(int node,int n,int m,vector<int>&color,vector<vector<int>>&v){
	if(node==n){
		return true;
	}
	for(int i=1;i<=m;i++){
		if(safe(node,i,color,v,n)){
			color[node] = i;
			if(solve(node+1,n,m,color,v))return true;
			color[node] = 0;
		}
	}
	return false;
}
int main(){
	int n;
	cin>>n;
	vector<vector<int>>v(n,vector<int>(n,0));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>v[i][j];
		}
	}
	vector<int>color(n,0);
	int m = 3;
	unordered_map<int,string>mp;
	mp.emplace(1,"Red");
	mp.emplace(2,"Green");
	mp.emplace(3,"Blue");
	if(solve(0,n,m,color,v)) {
	cout<<"Possible"<<endl;
	for(int x:color){
		cout<<x<<"---->"<<mp[x]<<endl;
	}
}
	else{
		cout<<"Impossible";
	}
	
	return 0;
}
