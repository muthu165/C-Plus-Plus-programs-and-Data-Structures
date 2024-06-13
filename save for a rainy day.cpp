#include<bits/stdc++.h>
using namespace std;
int main(){
	float pa,m,rpa;
	cin>>pa>>m>>rpa;
	float ra = pa,amt=0;
	if(pa<=0||m<=0||rpa<0){
		cout<<0<<endl;
		return 0;
	}
	else if(rpa==0){
		cout<<pa*m<<endl;
		return 0;
	}
	else{
	while(m--){
		amt = ra/(1+(rpa/(float)1200));
		float interest = ra-amt;
		ra = ra + (pa-interest);
		cout<<amt<<" "<<interest<<" "<<ra<<endl;
	}
	cout<<amt<<endl;
	cout<<ra-pa<<endl;
}
	
}
