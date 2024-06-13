#include<bits/stdc++.h>
using namespace std;
int maxa(vector<int>v,int n){
	if(n==1) return v[0];
	int mine = *min_element(v.begin(),v.end());
	if(v[0]==mine) return v[0];
	int inc[n]={0};
	int dec[n]={0};
	inc[0]=dec[0]=v[0];
	int f=0;
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(v[j]>v[i]){
				dec[i] = max(dec[i],inc[j]+v[i]);
				f=1;
			}
			else if(v[j]<v[i] && f==1){
				inc[i] = max(inc[i],dec[j]+v[i]);
			}
		}
	}
	int ans = max(*max_element(inc,inc+n),*max_element(dec,dec+n));
	return ans;
}
int main(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	cout<<maxa(v,n);
}
