#include<bits/stdc++.h>
using namespace std;

int fun(vector<int>&v,int k,int n){
	if(k==0) return 0;
	else if(k<v[n-1]) return -1;
	else{
		for(int i=0;i<n;i++){
			if(v[i]>k) continue;
			else{
				return 1+fun(v,k-v[i],n);
			}
		}
	}
}
int main(){
	int n;
	cin>>n;
	vector<int>v;
//	No of element to be stored in vector nn
	int nn;
	cin>>nn;
	for(int i=0;i<nn;i++){
		int t;
		cin>>t;
		v.push_back(t);
	}
	sort(v.begin(),v.end(),greater<int>());
	
	cout<<fun(v,n,nn);
//	for(int x:v){
//		cout<<x<<" ";
//	}
//	int c=0;
//	while(n>0){
//		for(int i=0;i<v.size();i++){
//			if(v[i]<=n){
//				n-=v[i];
//				c++;
//				break;
//			}
//			else if(n<v[cc-1]){
//				n=0;
//				break;
//			}
//		}
//	}
//	cout<<c<<endl;
}
