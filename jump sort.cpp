#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	cin>>k;
	int j = n*0.5;

	int l=0,h=j,f=0;
	while(f!=1){
		if(v[h]<k){
			l=h;
			h+=j;
		}
		else{
			if(h>n) h=n;
			for(int i=l;i<h;i++){
				if(v[i]==k){
					cout<<i;
					f=1;
					break;
				}
			}
		}
		if(f==1) break;
	}

		return 0;
	
	
}
