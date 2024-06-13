#include<bits/stdc++.h>
using namespace std;
//PRIMS ALGORITHM
int main(){
	int n=5;
	int a[5][5] = { { 0, 2, 0, 6, 0 },
                        { 2, 0, 3, 8, 5 },
                        { 0, 3, 0, 0, 7 },
                        { 6, 8, 0, 0, 9 },
                        { 0, 5, 7, 9, 0 } };
    
	int c=0;
	vector<bool>vis(n,false);
	vis[0]=true;
	while(c<n-1){
		int min = INT_MAX,t1=0,t2=0;
		for(int i=0;i<n;i++){
			if(vis[i])
			for(int j=0;j<n;j++){
				if(!vis[j]&&a[i][j]!=0){
					if(min>a[i][j]){
						min = a[i][j];
						t1 = i;
						t2 = j;
					}
				}
			}
		}
		cout<<t1<<":"<<t2<<"-->"<<min<<endl;
		c++;
		vis[t2]=true;
	}                    
                      
                        
                        
}
