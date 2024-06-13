#include<bits/stdc++.h>
using namespace std;
bool safe(vector<vector<char>>&v,int m,int n,int x,int y){
	return (x>=0 && x<m && y>=0 && y<n);
}
//int solve(vector<vector<char>>&v,int m,int n,int x,int y,char x){
//	
//}
int main(){
	int m,n;
	cin>>m>>n;
	vector<vector<char>>v(m,vector<char>(n,'.'));
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>v[i][j];
		}
	}
	char x;
	cin>>x;
	int a,b,f=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(v[i][j]==x){
				f=1;
				a=i;
				b=j;
				break;
			}
		}
		if(f==1) break;
	}
	cout<<a<<" "<<b;
//	cout<<solve(v,m,n,a,b,x);
	cout<<safe(v,m,n,2,2)?"true":"False";
	return 0;
	
}


