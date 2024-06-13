//The DNA sequence is composed of a series of nucleotides abbreviated as 'A', 'C', 'G', and 'T'.
//
//For example, "ACGAATTCCG" is a DNA sequence.
//When studying DNA, it is useful to identify repeated sequences within the DNA.
//
//Given a string s that represents a DNA sequence, return all the 10-letter-long sequences (substrings) that occur more than once in a DNA molecule. You may return the answer in any order.
//
// 
//
//Example 1:
//
//Input: s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT"
//Output: ["AAAAACCCCC","CCCCCAAAAA"]
//Example 2:
//
//Input: s = "AAAAAAAAAAAAA"
//Output: ["AAAAAAAAAA"]
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,t;
	cin>>s;
	int n = s.size();
	cout<<"Size "<<n<<endl;
	unordered_map<string,int>mp;
	for(int i=0;i<n-10;i++){
		t = s.substr(i,10);
		mp[t]++;
	}
	vector<string> ans;
	for(auto x:mp){
		if(x.second>1){
			ans.push_back(x.first);
		}
	}
	for(string x:ans){
		cout<<x<<" ";
	}
	return 0;
}
