#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the no of elements in an array:"<<endl;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	for(int i=0;i<v.size();i++){
		if(v[i]>0){
			continue;
		}
		else if(v[i]<0){
			int front = i-1;
			if(abs(v[i])==v[i-1]){
				v.erase(v.begin()+i-1);
				v.erase(v.begin()+i);
				i-=2;
			}
			else if(abs(v[i])>v[i-1]){
				v.erase(v.begin()+i-1);
				i-=2;
			}
			else{
				v.erase(v.begin()+i);
				i-=2;
			}
		}
	}
	cout<<"The resultant array is: "<<endl;
	for(int x:v){
		cout<<x<<" ";
	}
	return 0;
}

//10 1 2 3 -5

