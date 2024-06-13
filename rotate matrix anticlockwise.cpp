#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<vector<int>>v(n,vector<int>(n,0));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>v[i][j];
		}
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			swap(v[i][j],v[j][i]);
		}
	}
//	anticlockwise
//	for(int i=0;i<n;i++){
//		int f=0,l=n-1;
//		while(f<l){
//			swap(v[f][i],v[l][i]);
//			f++;
//			l--;
//		}
//	}
//	clockwise
	for(int i=0;i<n;i++){
		reverse(v[i].begin(),v[i].end());
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
}
