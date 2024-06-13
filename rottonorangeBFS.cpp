#include<bits/stdc++.h>
using namespace std;
int mintimerottenorange(vector<vector<int>>&v,int n,int m){
	int dr[] = {-1,1,0,0};
	int dc[] = {0,0,1,-1};
	vector<vector<int>>vis(n,vector<int>(m,0));
	queue<pair<pair<int,int>,int>>q;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(v[i][j]==2){
				q.push({{i,j},0});
			}
		}
	}
	int time=0;
	while(!q.empty()){
		int r = q.front().first.first;
		int c = q.front().first.second;
		int t = q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int nr = r + dr[i];
			int nc = c + dc[i];
			if(nr>=0 && nr<n && nc>=0 && nc<m && v[nr][nc]==1 && vis[nr][nc]==0){
				vis[nr][nc]=2;
				q.push({{nr,nc},t+1});
			}
		}
		time = t;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(v[i][j]==1 && vis[i][j]!=2){
				return -1;
			}
		}
	}
	return time;
}
int main(){
	int n,m;
	cin>>n>>m;
	vector<vector<int>>v(n,vector<int>(m,0));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>v[i][j];
		}
	}
	cout<<mintimerottenorange(v,n,m);
}
