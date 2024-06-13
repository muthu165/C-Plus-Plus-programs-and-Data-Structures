// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<char> ch;
    vector<int> v;
string s="jjggffdddddcvb";
int c=1;
for(int i=0;i<s.length();i++){
    if(s[i]!=s[i+1]){
        ch.push_back(s[i]);
        v.push_back(c);
        c=1;
    }
    else{
        c++;
    }
    
}
string ans="";
for(int i=0;i<ch.size();i++){
    if(v[i]==1){
        string a="";
        ans+=ch[i]+a;}
    else{
        ans+=ch[i]+to_string(v[i]);
}    }
cout<<ans;



    return 0;
}