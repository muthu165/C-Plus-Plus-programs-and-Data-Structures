#include<bits/stdc++.h>
using namespace std;

int findminvertex(vector<bool>&vis,vector<int>&value){
	int dist = INT_MAX,ind=0;
	for(int i=0;i<vis.size();i++){
		if(!vis[i] && value[i]<dist){
			dist = value[i];
			ind = i;
			
		}
	}
	return ind;
}

void dijistras(vector<vector<int>> &a,int n){
	vector<bool>vis(n,false);
	vector<int>value(n,INT_MAX);
	int src = 0;
	value[src] = 0;
	for(int i=0;i<n;i++){
		int s = findminvertex(vis,value);
		vis[s] = true;
		for(int j=0;j<n;j++){
			if(!vis[j] && a[s][j]!=0 && (value[s]+a[s][j])<value[j]){
				value[j] = value[s]+a[s][j];
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<src<<"->"<<i<<"=="<<value[i]<<endl;
	}
}
int main(){
	int n=9;
	vector<vector<int>>a;
	a= { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };
    dijistras(a,n);
}
