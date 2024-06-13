#include<bits/stdc++.h>
using namespace std;
int ans=0;
void solve(int ind,vector<char>&v,vector<char>&ds,int b,string &y){
	if(ind>=v.size()){
//		
		if(ds.size()==b){
			string x;
			for(int i=0;i<b;i++){
				x+=ds[i];
			}
//			cout<<x<<endl;
			if(x==y) ans++;
			
		}
		return;
		
	}
	ds.push_back(v[ind]);
	solve(ind+1,v,ds,b,y);
	ds.pop_back();
	
	solve(ind+1,v,ds,b,y);
}
int main(){
	cout<<"Enter two strings : ";
	string x,y;
	cin>>x>>y;
	int a = x.size();
	int b = y.size();
	vector<char>v(a);
	for(int i=0;i<a;i++){
		v[i]=x[i];
//		cout<<v[i]<<" ";
	}
	vector<char>ds;
	solve(0,v,ds,b,y);
	cout<<ans;
	
	
//	solve()
}
