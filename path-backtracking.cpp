#include<bits/stdc++.h>
using namespace std;
int path=0;
	int fun(vector<vector<int>>&v,int r,int c){
 		if(r==0 || c==0){
 			return 1;
		 }
		 return fun(v,--r,c)+fun(v,r,--c);
	}
int main(){
	int n;
	cin>>n;
	vector<vector<int>>v(n,vector<int>(n,0));
	cout<<fun(v,n-1,n-1);
//	cout<<path;
}
