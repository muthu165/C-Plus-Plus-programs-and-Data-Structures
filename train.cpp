#include<bits/stdc++.h>
using namespace std;
int main(){
	int platform=1;
	int n;
	cin>>n;
	vector<int>come(n),go(n);
	for(int i=0;i<n;i++){
		cin>>come[i];
	}
	for(int i=0;i<n;i++){
		cin>>go[i];
	}
	sort(come.begin(),come.end());
	sort(go.begin(),go.end());
	int i=1,j=0;
	int p=1;
	while(i<n&&j<n){
		
		if(come[i]<=go[j]){
			p++;
			i++;
		}
		else if(come[i]>go[j]){
			p--;
			j++;
		}
		platform = max(platform,p);
	}
	cout<<platform<<endl;
}
