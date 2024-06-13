#include<bits/stdc++.h>
using namespace std;
vector<string> v;
void sub(string s,string s2){
	int c=0,j=0,k=0;
	string ans=s;
		for(j=0;j<s2.length();j++){
				for(k=0;k<s.length();k++){
					if(s2[j]==s[k]){
						s[k]='*';
						c++;
						break;
					}
					
				}
			}
		if(c==s2.length()){
			v.push_back(ans);
		}
			
}
int main(){
	string s1 = "this is a test string";
	string s2 = "tist";
	int n=s1.length();
	string s;
		int i=0,j=0,len=0,k=0,c=0;
	
	if(s1==s2){
		cout<<s1;
	}

	else{
		for(len=1;len<=n;len++){
			for(i=0;i<=n-len;i++){
				 s=s1.substr(i,len);
//				 cout<<s<<endl;	 
				sub(s,s2);
			}
				
		}
		if(!v.empty())
			cout<<v[0];
}
//	for(i=0;i<v.size();i++){
//		cout<<v[i]<<endl;
//	}

	return 0;
}
