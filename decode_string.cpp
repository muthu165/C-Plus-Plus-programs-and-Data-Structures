#include<bits/stdc++.h>
using namespace std;
string decode(string s){
	string ans="";
	for(int i=0;i<s.length();i++){
		if(s[i]!=']'){
			ans+=s[i];
		}
		else{
			string t="";
			while(!ans.empty() && ans.back()!='['){
				t.push_back(ans.back());
				ans.pop_back();
			}
			reverse(t.begin(),t.end());
			ans.pop_back();
			
			string n="";
			while(!ans.empty() && ans.back()>='0' && ans.back()<='9'){
				n.push_back(ans.back());
				ans.pop_back();
			}
			reverse(n.begin(),n.end());
			int nn = stoi(n);
			while(nn--){
				ans+=t;
			}
		}
	}
	return ans;
}
int main(){
	string s = "6[b2[ca]4[muthu]]";
	cout<<decode(s);
}
