#include<bits/stdc++.h>
using namespace std;
void josh(vector<int>v,int k,int ind){
	if(v.size()==1) {
	cout<<v[0];
	return;}
	
	ind = (ind+k)%v.size();
	v.erase(v.begin()+ind);
	josh(v,k,ind);
}
int main(){
	int people,kill;
	cin>>people>>kill;
	kill--;
	vector<int>v;
	for(int i=1;i<=people;i++){
		v.push_back(i);
	}
	int ind=0;
	josh(v,kill,ind);
}
