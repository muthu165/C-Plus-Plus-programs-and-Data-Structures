#include<bits/stdc++.h>
using namespace std;
class graph{
	vector<bool>vis;
	map<int,list<int>>adj;
	public:
		void addedge(int x,int y);
		void bfs(int s);
};

void graph::addedge(int x,int y){
	adj[x].push_back(y);
	adj[y].push_back(x);
}

void graph::bfs(int s){
	vis.resize(adj.size(),false);
	vis[s] = true;
	queue<int>q;
	q.push(s);
	while(!q.empty()){
		int c = q.front();
		cout<<c<<" ";
		q.pop();
		for(auto x:adj[c]){
			if(!vis[x]){
				vis[x] = true;
				q.push(x);
			}
		}
	}
}
//class graph{
//	vector<bool>vis;
//	map<int,list<int>>adj;
//	public:
//		void addedge(int x,int y);
//		void bfs(int s);
//};
//void graph::addedge(int x,int y){
//	adj[x].push_back(y);
//	adj[y].push_back(x);
//}
//void graph::bfs(int s) {
//    vis.resize(adj.size(), false);
//    queue<int> q;
//    vis[s] = true;
//    q.push(s);
//    while (!q.empty()) {
//        int cur = q.front();
//        cout << cur << " ";
//        q.pop();
//        for (auto a : adj[cur]) { 
//            if (!vis[a]) {
//                vis[a] = true;
//                q.push(a);
//            }
//        }
//    }
//}
//
//
int main(){
	graph g;
	int n;
	cin>>n;
	int x,y;
	while(n--){
		cin>>x>>y;
		g.addedge(x,y);
	}
	g.bfs(2);
	return 0;
}
