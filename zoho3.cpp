#include<bits/stdc++.h>
using namespace std;
bool issafe(int a,int b,int r,int c){
	return (a>=0 && a<r && b>=0 && b<c);
}
int solve(int x,int y,vector<vector<int>>&v,int row,int col){
	v[x][y] = 0;
//	down
	if(issafe(x+1,y,row,col) && v[x+1][y]==1 ){
		v[x+1][y]=0;
		return 1+ solve(x+1,y,v,row,col);
	}
	else if(issafe(x-1,y,row,col) && v[x-1][y]==1 ){
		v[x-1][y]=0;
		return 1+solve(x-1,y,v,row,col);
	}
	else if(issafe(x,y+1,row,col) && v[x][y+1]==1 ){
		return 1+solve(x,y+1,v,row,col);
		v[x][y+1]=0;
	}
	else if(issafe(x,y-1,row,col) && v[x][y-1]==1 ){
		v[x][y-1]=0;
		return 1+solve(x,y-1,v,row,col);
	}
	else{
		return 0;
	}
}
int main(){
	cout<<"Enter the row and column: "<<endl;
	int row,col;
	cin>>row>>col;
	vector<vector<int>>v(row,vector<int>(col,0));
//	vector<vector<bool>>vis(row,vector<bool>(col,false));
	int ans = 0;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>v[i][j];
		}
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(v[i][j]==1){
				int sum = solve(i,j,v,row,col);
				cout<<sum<<endl;
				ans = max(ans,sum); 
			}
		}
	}
	cout<<ans+1;
}
//3 3
//0 1 1
//0 1 1
//0 1 1
