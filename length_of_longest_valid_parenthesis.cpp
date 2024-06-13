#include<bits/stdc++.h>
using namespace std;
int fun(string s){
	int ans=0;
	int n = s.size();
	for(int i=0;i<n;i++){
		stack<char>st;
		int t=0;
		for(int j=i;j<n;j++){
			if(s[j]=='('||s[j]=='['||s[j]=='{'){
				st.push(s[i]);
			}
			else if(!st.empty()){
				if(s[j]==')'&& st.top()=='('||s[j]==']'&&st.top()=='['||s[j]=='}'&&st.top()=='{'){
					t+=2;
					st.pop();
				}
				else{
					break;
				}
			}
			else{
				break;
			}
			if(st.empty()){
				ans = max(ans,t);
			}
		}
	}
	return ans;
	
}
int main(){
	string s;
	cin>>s;
	cout<<fun(s)<<endl;
}
