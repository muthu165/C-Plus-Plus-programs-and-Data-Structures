#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<long long>a(n),b(n);
		long long gift = 0,t=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		b[0]=1;
		for(int i=1;i<n;i++){
			if(a[i]>a[i-1])
				b[i] = b[i-1]+1;
			else
				b[i]=1;
		}
		gift = b[n-1];
		for(int i=n-2;i>=0;i--){
			if(a[i]>a[i+1])
				t = b[i+1]+1;
			else{
				t=1;
			}
			gift+=max(b[i],t);
			b[i]=t;
				
		}
		cout<<"gift-->"<<gift<<endl;
	}
	return 0;
}
