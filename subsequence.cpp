#include<bits/stdc++.h>
using namespace std;
void subs(string ip,string op){
	if(ip.empty()){
		cout<<op<<endl;
		return;
	}
	subs(ip.substr(1),op+ip[0]);
	subs(ip.substr(1),op);
}
void suba(int a[],int ind,vector<int> subseq,int n){
	if(ind==n){
		for(int x:subseq){
			cout<<x<<" ";
		}
		if(subseq.empty()){
			cout<<"{}";
		}
		cout<<endl;
		return;
	}
	else{
		subseq.push_back(a[ind]);
		suba(a,ind+1,subseq,n);
		subseq.pop_back();
		suba(a,ind+1,subseq,n);
	}
}
int main(){
	string s;
	cin>>s;
	int a[6] = {1,2,3,4,5,6};
	vector<int> ss;
	string op="";
	subs(s,op);
	cout<<"----------------------------------------";
	suba(a,0,ss,6);
	return 0;
}
