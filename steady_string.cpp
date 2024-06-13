#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	unordered_map<char,int> a;
	unordered_map<char,int> b;
	b['A'] = b['C'] = b['T'] = b['G'] = 0;
	for(char x:s){
		a[x]++;
	}
	int l = n/4;
	vector<char> v;
	for(const auto& e:a){
		if(a.at(e.first)>l){
			v.emplace_back(e.first);
		}
	}
	if(v.size()==0){
		cout<<0;
		return 0;
	}
	int st = 0,ans = n;
	for(int i=0;i<n;){
		int ch = 0;
		for(int j=0;j<v.size();j++){
			if(b[v[j]]<a[v[j]]-l){
				ch = 1;
				break;
			}
		}
		if(ch==1){
			b[s[i]]++;
			i++;
		}
		else{
			ans = min(ans,i-st);
			b[s[st]]--;
			st++;
		}
	}
	cout<<"-->"<<ans;
	return 0;
}
