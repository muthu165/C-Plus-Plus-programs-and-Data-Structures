#include<bits/stdc++.h>
using namespace std;
void fun(int i,int j,vector<vector<int> > &a,vector<vector<int> > &x){
	
	if(a[i][j]<a[i][j+1]){
		x[i][j+1]++;
//		fun(i,j+1,a,x);
	}
	if(a[i][j]<a[i+1][j]){
		x[i+1][j]++;
//		fun(i+1,j,a,x);
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	vector<vector<int> > a(n,vector<int>(m));
	vector<vector<int> > x(n,vector<int>(m));
	int i=0,j=0;
	int t;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	int k;
	cin>>k;
	
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(j<m-1){
			if(a[i][j]<a[i][j+1]){
				x[i][j+1]++;
//				fun(i,j,a,x);
			}}
			if(i<n-1){
				if(a[i][j]<a[i+1][j]){
					x[i+1][j]++;
//				fun(i,j,a,x);
			}}
			
		}
	}
	for(i=0;i<n-2;i++){
		for(j=0;j<m;j++){
		
			if(x[i][j]==k){
				cout<<i<<" "<<j<<endl;
			}
			

		}
	}
	
	
}
