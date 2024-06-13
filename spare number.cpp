#include<bits/stdc++.h>
using namespace std;
int main(){
	int x=6;
	vector<bool> bin;
	while(x!=0){
		bin.push_back(x&1);
		x>>=1;
	}
	bin.push_back(0);
	int n=bin.size();
	cout<<"size: "<<n<<endl;
	int l = 0;
	for(int i=1;i<n-1;i++){
		if(bin[i]==1 && bin[i-1]==1 && bin[i+1]!=1){
			bin[i+1]=1;
		
		for(int j=i;j>=l;j--){
			bin[j]=0;
		}
		
		l=i+1;
		
	}
}
int ans=0;
for(int i=0;i<n;i++){
	ans+=bin[i]*(1<<i);
}
cout<<"Next sparse number is: "<<ans;

}
