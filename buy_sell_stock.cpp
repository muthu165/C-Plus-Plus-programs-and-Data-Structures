#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[] = {7,1,5,3,6,4};
	int n = sizeof(a)/sizeof(a[0]);
	int j=0;
	vector<int> v;
	for(int i=1;i<n;i++){
		if(a[i-1]>a[i]){
			j=i;
		}
		else if(a[i-1]<=a[i] && (i+1==n||a[i]>a[i+1])){
			v.emplace_back(a[i]-a[j]);
		}
	}
	for(int x:v){
		cout<<x<<endl;
	}
	sort(v.begin(),v.end(),greater<int>());
	cout<<v[0]+v[1];
}
