#include<bits/stdc++.h>
using namespace std;
//KMP OR Z OR NAVE
int main(){
	string s = "abcfefg";
	string x = "cfe";
	int f = x.size();
	for(int i=0;i<s.size();i++){
		int r=0,c=0;
		if(s[i]==x[r]){
			int h=i+1;
			c++;
			r++;
			while(h<s.size() && s[h]==x[r]){
				
				c++;
				h++;
				r++;
			}
			if(c==f){
				cout<<i<<" "<<i+f<<endl;
				break;
			}
		}
	}
}
