#include<bits/stdc++.h>
using namespace std;
int fun(int a,int b){
	return (b==0)?a:fun(b,a%b);
}
int main(){
	int a=12;
	int b=20;
	cout<<"gcd of a and b is: "<<fun(a,b);
}
