#include<bits/stdc++.h>
using namespace std;
int main(){
	cout<<"Enter the string:";
	string s;
	cin>>s;
	string t=s;
	vector<char> v;
	for(int i=0;i<s.length();i++){
		for(int j=i+1;j<s.length();j++){
			if(t[i]==t[j]){
				t[j]='*';
			}
		}
	}
	for(char x:t){
		if(x!='*')
			v.emplace_back(x);
	}
	sort(v.begin(),v.end());
	int c=0;
	for(char x:v){
		int co = count(s.begin(),s.end(),x);
		if(co>1){
			c++;
			cout<<x<<"-"<<co<<" ";
		}
	}
	if(c==0){
		cout<<"VALID";
	}
}
