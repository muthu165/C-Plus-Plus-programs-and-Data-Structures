#include<bits/stdc++.h>
using namespace std;
//adams no
int fun(int n){
	int rev=0;
	while(n>0){
	rev= rev*10 + n%10;
	n/=10;
}
return rev;
}
int main(){
	int n=1234;
	int m = fun(n);
	int nn = n*n;
	int mm = m*m;
//	cout<<m<<endl<<nn<<" "<<mm<<endl;
	if(nn==fun(mm)){
		cout<<"adams";
	}
	else{
		cout<<"not adams";
	}
	
}
