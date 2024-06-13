#include<bits/stdc++.h>
using namespace std;
int main(){
	string original="YRBR";
	string guess="BRYY";
		int ans=0;
	for(int i=0;i<guess.size();i++){
		if(guess[i]==original[i]){
			ans+=2;
			original[i]='*';
			guess[i]='*';
//			cout<<guess[i]<<" "<<original[i]<<" "<<ans<<endl;
		}
		
	}
	for(int i=0;i<guess.size();i++){
		if(guess[i]!=original[i]){
			auto it = find(original.begin(),original.end(),guess[i]);
			if(it!=original.end()){
				int x = it-original.begin();
				ans+=1;
				original[x]='*';
			}
//			cout<<guess[i]<<" "<<original[i]<<" "<<ans<<endl;
		}
//		cout<<original<<endl;
	}
	cout<<ans;
}
