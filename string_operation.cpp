#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1 = "dcba";
    string s2 = "abcd";
    list<char> v(s1.begin(),s1.end());
    list<char>::iterator it = v.begin();
    // string ans="";
    int c=0;
    while(s1!=s2){
        // ans="";
    for(int i=s2.length()-1;i>=0;i--){
        if(s2[i]!=s1[i]){
            c++;
            advance(it,i);
            // char x = s1[i];
            v.erase(it);
            v.push_front(s1[i]);
            break;
        }
    }
    s1="";
    for(char d:v){
        s1+=d;
    }
    // s1 = ans;
    cout<<s1<<endl;
    
    }
    cout<<"The min transformation required-->: "<<c;
}
