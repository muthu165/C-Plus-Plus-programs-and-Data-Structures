#include<bits/stdc++.h>
using namespace std;
int prec(char x){
	if(x=='+' || x=='-') return 1;
	else if(x=='*'||x=='/') return 2;
	else if(x=='^') return 3;
	return -1;
}
string postfix(string s){
	stack<char> st;
	string ans="";
	for(int i=0;i<s.size();i++){
		if(isalpha(s[i])){
			ans+=s[i];
		}
		else if(s[i]=='('){
				st.push(s[i]);
			}
		else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]==')'){
			if(s[i]==')'){
				while(st.top()!='('){
					ans+=st.top();
					st.pop();
				}
//				ans+=st.top();
				st.pop();	
			}
			else{
				while (!st.empty() && prec(s[i]) <= prec(st.top()) && st.top() != '(') {
					ans+=st.top();
					st.pop();
				}
				st.push(s[i]);
			}
			
		}
	}
	while(!st.empty()){
		ans+=st.top();
		st.pop();
	}
	return ans;
}
int main(){
	string s;
	cin>>s;
	cout<<postfix(s);
}
