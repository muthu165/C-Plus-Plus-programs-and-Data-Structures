#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cout<<"Enter string: ";
	getline(cin,s);
	int i=0, a[256]={0};
	int n = s.length();
	for(i=0;i<n;i++){
		a[(int)s[i]]++;
	}
	for(i=0;i<256;i++){
		if(a[i]!=0){
			cout<<(char)i<<" --> "<<a[i]<<endl;
		}
	}
}
