#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	vector<bool>visited(n,false);
	queue<int>q;
	for(int i=0;i<n;i++){
		if(visited[i]==false){
			q.push(i);
			visited[i]=true;
		}
		for(int j=0;j<n;j++){
			if(visited[j]==false && a[i][j]==1){
				q.push(j);
				visited[j]=true;
			}
		}
		if(i<n-1)
		cout<<q.front()<<"->";
		else
		cout<<q.front();
		 
		q.pop();
	}
}
