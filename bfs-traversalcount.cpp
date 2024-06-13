#include<bits/stdc++.h>
using namespace std;
int m,n;
bool safe(vector<vector<char>>&v,int x,int y){
	return (x>=0 && x<m && y>=0 && y<n);
}
//AlPHBETS IN INCREASING ORDER COUNT
int solve(vector<vector<char>>&v,int m,int n,int x,int y,char cx){
	char gf = static_cast<char>(cx+1);
	
 	if(safe(v,x-1,y) && (v[x-1][y]==gf)){
 		return 1+solve(v,m,n,x-1,y,gf);
	 }
	 else if(safe(v,x-1,y+1) && (v[x-1][y+1]==gf)){
 		return 1+solve(v,m,n,x-1,y+1,gf);
	 }
	 else if(safe(v,x,y+1) && (v[x][y+1]==gf)){
 		return 1+solve(v,m,n,x,y+1,gf);
	 }
	 else if(safe(v,x+1,y+1) && (v[x+1][y+1]==gf)){
 		return 1+solve(v,m,n,x+1,y+1,gf);
	 }
	 else if(safe(v,x-1,y-1) && (v[x-1][y-1]==gf)){
 		return 1+solve(v,m,n,x-1,y-1,gf);
	 }
	 else if(safe(v,x+1,y) && (v[x+1][y]==gf)){
 		return 1+solve(v,m,n,x+1,y,gf);
	 }
	 else if(safe(v,x,y-1) && (v[x][y-1]==gf)){
 		return 1+solve(v,m,n,x,y-1,gf);
	 }
	 else if(safe(v,x+1,y-1) && (v[x+1][y-1]==gf)){
 		return 1+solve(v,m,n,x+1,y-1,gf);
	 }
	 else{
	 	return 0;
	 }
    
}
int main(){
	
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
// 	cout<<a<<" "<<b<<endl;
	cout<<solve(v,m,n,a,b,x);

	return 0;
	
}
