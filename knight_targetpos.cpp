#include<bits/stdc++.h>
using namespace std;
struct cell{
	int x,y,dis;
	cell(){}
	cell(int x,int y,int dis):x(x),y(y),dis(dis){}
	
};
bool inboard(int x,int y,int N){
	if(x>=1 && x<=N && y>=1 && y<=N){
		return true;
	}
	return false;
}

int min(int kp[],int tp[],int N){
	int dx[]={-2,-1,1,-2,-1,2,2,1};
	int dy[]={-1,-2,-2,1,2,-1,1,2};
	
	queue<cell> q;
	q.push(cell(kp[0],kp[1],0));
	
	bool visit[N+1][N+1];
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			visit[i][j]=false;
		}
	}
	visit[kp[0]][kp[1]]=true;
	
	cell t;
	int x,y;
	while(!q.empty()){
		t = q.front();
		q.pop();
		if(t.x==tp[0] && t.y==tp[1]){
			return t.dis;
		}
		
		for(int i=0;i<8;i++){
				x=t.x+dx[i];
				y=t.y+dy[i];
		
		if(inboard(x,y,N) && !visit[x][y]){
			visit[x][y]=true;
			q.push(cell(x,y,t.dis+1));
		}
	}
		
	}
}
int main(){
	cout<<"Enter the chess board size: ";
	int N;
	cin>>N;
	int kp[]={0,0};
	int tp[]={30,30};
	cout<<min(kp,tp,N);
	return 0;
}
