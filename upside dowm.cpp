#include<bits/stdc++.h>
using namespace std;
//Strobogrammatic number
int fun(string s,vector<string>& ans){
	int f=0;int opp=0;int z = s.size();
	string t="";

for(int i=s.size()-1;i>=0;i--){
	if(s[i]=='0' || s[i]=='8' ||s[i]=='1'){
		t+=s[i];
	}
	else if(s[i]=='6'){

	t+="9";
	}
	else if(s[i]=='9'){

		t+="6";
	}
	else{
		f=1;
		break;
	}
}

if(t==s){
	ans.emplace_back(s);
}

}
int main(){
	long int n;
	cin>>n;
	int x=1;
	for(long int i=0;i<n;i++){
		x*=10;
	}
	long int l=x/10;
	x=x-1;
	vector<string> ans;
	
	for(long int i=l;i<=x;i++){
		string x = to_string(i);
		fun(x,ans);
	}
	
	for(long int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl<<ans.size();

	
}
