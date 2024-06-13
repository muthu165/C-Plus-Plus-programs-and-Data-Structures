#include<bits/stdc++.h>
using namespace std;
void merge(int low,int mid, int high,vector<int>&v,set<pair<int,int>>&p){
	int r = mid+1;
	int l=low;
	vector<int>t;
	while(l<=mid && r<=high){
		if(v[l]<=v[r]){
			t.push_back(v[l]);
			
			p.insert({v[l],v[r]});
			p.insert({v[r],v[l]});
			p.insert({v[l],v[l]});
			l++;
		}
		else{
			t.push_back(v[r]);
			p.insert({v[l],v[r]});
			p.insert({v[r],v[l]});
			p.insert({v[r],v[r]});
			r++;
		}
	}
	while(l<=mid){
		t.push_back(v[l]);
		p.insert({v[l],v[l]});
		l++;
	}
	while(r<=high){
		t.push_back(v[r]);
		p.insert({v[r],v[r]});
		r++;
	}
//	for(int x:t){
//		cout<<x<<" "
//	}
	for(int i=low;i<=high;i++){
		v[i] = t[i-low];
	}
}
void solve(int l,int r,vector<int>&v,set<pair<int,int>>&p){
	if(l==r) return;
		int mid = (l+r)/2;
		solve(l,mid,v,p);
		solve(mid+1,r,v,p);
		merge(l,mid,r,v,p);
	
}
int main(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	set<pair<int,int>>p;
	solve(0,n-1,v,p);
	for(int x:v){
		cout<<x<<" ";
	}
	cout<<endl<<"pairs"<<endl;
	for(auto x:p){
		cout<<x.first<<" "<<x.second<<endl;
	}
	return 0;
}
