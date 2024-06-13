#include<bits/stdc++.h>
using namespace std;
int main(){
	string s = "Binny,Sandhya,Rachel,Hema,Saranya,Joyce,Sowmiya";
	vector<string> v;
	string ans="";
	queue<string> q1;
	queue<string> q2;
	for(int i=0;i<s.length();i++){
		if(s[i]!=','){
			ans+=s[i];
		}
		else{
			v.push_back(ans);
			ans="";
		}
	}
	v.push_back(ans);
	int n = v.size();
	if(n>10){
	    for(int i=0;i<n-10;i++){
	        cout<<"Queue is full!!!"<<endl;
	    }
	}
	for(int i=0;i<min(10,n);i++){
	    string w = v[i];
	    if(w[0]=='S' && w[w.length()-1]=='a'){
	        q1.push(w);
	    }
	    else{
	        q2.push(w);
	    }
	}
	cout<<"Queue1: "<<endl;
	if(q1.empty()){
	    cout<<"No elements in queue1"<<endl;
	}
	else{
	while(!q1.empty()){
	    cout<<q1.front()<<endl;
	    q1.pop();
	}
	}
		cout<<"Queue2: "<<endl;
	if(q2.empty()){
	    cout<<"No elements in queue2"<<endl;
	}
	else{
	while(!q2.empty()){
	    cout<<q2.front()<<endl;
	    q2.pop();
	}
	}
	
// 	for(string x:v){
// 		cout<<x<<endl;
// 	}
}
