#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	char tp[n];
	for(int i=0;i<n;i++){
		cin>>tp[i];
	}
	int k;
	cin>>k;
	int ans=0;
	for(int i=0;i<n;i++){
		int c=0,x=0;
		if(tp[i]=='p'){
			int h=i+1;
			int e = h+k;
			while(h<e && h<n){
				if(tp[h]=='t'){
					tp[h]='c';
					c++;
					break;
				}
				h++;
			}
		}
		if(tp[i]=='p'){
			int f = i-1;
			while(f>=0 && f>f-k){
				if(tp[f]=='t'){
					tp[f]='c';
					x++;
					break;
				}
				f--;
			}
		}
//		cout<<c<<" "<<x<<endl;
		ans+=max(c,x);
	}
	cout<<ans;
}
