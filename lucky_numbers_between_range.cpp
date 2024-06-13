#include<bits/stdc++.h>
using namespace std;
bool lucky(int n,int d){
	int sum = 0;
	int l = n%10;
	if(l==d){
		return false;
	}
	n/=10;
	while(n>0){
		int cd = n%10;
		if(cd==d){
			return false;
		}
		if(cd<l){
			return false;
		}
		l+=cd;
		n/=10;
	}
	
	return true;
	
}
int main(){
	bool xx=false;
	int x,y,d;
	cout<<"enter the input:";
	cin>>x>>y>>d;
	for(int i=x;i<=y;i++){
		if(lucky(i,d)){
			xx = true;
			cout<<i<<" ";
		}
	}
	if(xx==false){
		cout<<-1;
	}
}

