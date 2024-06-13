#include<bits/stdc++.h>
using namespace std;
int tsp(vector<vector<int>>&v,int st,vector<int>&optpath,int n){
	vector<int>path;
	for(int i=0;i<n;i++){
		if(i!=st){
			path.push_back(i);
		}
	}
	int minpath = INT_MAX;
	do{
		int pathcost=0;
		int k=st;
		for(int i=0;i<path.size();i++){
			pathcost+=v[k][path[i]];
			k = path[i];
		}
		pathcost+=v[k][st];
		minpath = min(minpath,pathcost);
		if(pathcost==minpath){
			optpath=path;
			optpath.push_back(st);
		}
	
	}
	while(next_permutation(path.begin(),path.end()));
	
	return minpath;
	
	
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
	int st = 0;
	vector<int>optpath;
	int optcost = tsp(v,st,optpath,n);
	cout<<"Optimal path: "<<endl;
	for(auto x:optpath){
		cout<<x<<" ";
	}
	cout<<endl<<"Optimal cost:"<<endl;
	cout<<optcost<<endl;
	return  0;
}
//4
//0 10 15 20
//10 0 35 25
//15 35 0 30
//20 25 30 0

