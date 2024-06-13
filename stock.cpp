#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[6]={7,1,5,3,6,4};
	int b=a[0];
	int pro=0;
	for(int i=1;i<6;i++){
		if(b>a[i]){
			b=a[i];
		}
		else if(a[i]-b>pro){
			pro=a[i]-b;
		}
	}
	cout<<pro<<endl;
}
