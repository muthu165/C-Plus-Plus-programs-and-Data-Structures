#include<bits/stdc++.h>
using namespace std;
class graph{
	map<int,bool>vis;
	map<int,list<int>>adj;
	public:
	void addedge(int src,int des);
	void dfs(int src);
};
void graph::addedge(int src,int des){
	adj[src].push_back(des);
}
void graph::dfs(int src){
	vis[src] = true;
	cout<<src<<" ";
	list<int>::iterator it;
	for(auto it=adj[src].begin();it!=adj[src].end();it++){
		if(!vis[*it]){
			dfs(*it);
		}
	}
}
int main(){
	graph g;
	int n;
	cin>>n;
	int x,y;
	while(n--){
		cin>>x>>y;
		g.addedge(x,y);
	}
	g.dfs(2);
	return 0;
}
