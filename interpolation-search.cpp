#include<bits/stdc++.h>
using namespace std;
//ARRAY SORTED
//INTERPOLITAN SEARCH
int search(vector<int>v,int n,int k){
	int l=0,h=n-1;

	while(l<=k && k>=v[l] && k<=v[h]){
		if(l==h){
		if(v[l]==k) return l;
		
		return -1;
	}
		int pos = l +(((double)(h-l)/(v[h]-v[l]))*(k-v[l]));
		if(v[pos]==k) return pos;
		if(v[pos]<k) l=pos+1;
		if(v[pos]>k) h=pos-1;
	}
	return -1;
}
int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int k;
	cin>>k;
	int i = search(v,n,k);
	if(i!=-1)cout<<i;
	else cout<<"not found";
}
