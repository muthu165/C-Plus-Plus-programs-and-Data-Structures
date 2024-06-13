#include<bits/stdc++.h>
using namespace std;
int main(){
	int l,r;
	cin>>l>>r;
	vector<int>v(r+1,1);
	v[0]=0;
	v[1]=0;
	for(int i=2;i*i<=r;i++){
		if(v[i]==1){
			for(int j=i*i;j<=r;j+=i){
				v[j] = 0;
			}
		}
	}
	for(int i=0;i<=r;i++){
		if(v[i]==1){
			int x = i*i;
			if(x>l && x<r){
				cout<<x<<" ";
			}
		}
	}
}
