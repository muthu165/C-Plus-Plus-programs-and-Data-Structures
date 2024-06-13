#include<bits/stdc++.h>
using namespace std;
bool fun(vector<int>&v,int i){
	return (v[i]!=11 && v[i]!=12 && v[i]!=13 && v[i]!=1);
}
int main(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int a=0,b=0;
	for(int i=0;i<n;i++){
		if(v[i]==1 && i+4<n && fun(v,i+1)&&fun(v,i+2)&&fun(v,i+3)&&fun(v,i+4)){
			if(i%2==0){
				cout<<"Player A scores 4 point(s)"<<endl;
				a+=4;
			}
			else{
				cout<<"Player B scores 4 point(s)"<<endl;
				b+=4;
			}
		}
		else if(v[i]==13 && i+3<n && fun(v,i+1)&&fun(v,i+2)&&fun(v,i+3)){
			if(i%2==0){
				cout<<"Player A scores 3 point(s)"<<endl;
				a+=3;
			}
			else{
				cout<<"Player B scores 3 point(s)"<<endl;
				b+=3;
			}
		}
		else if(v[i]==12 && i+2<n && fun(v,i+1)&&fun(v,i+2)){
			if(i%2==0){
				cout<<"Player A scores 2 point(s)"<<endl;
				a+=2;
			}
			else{
				cout<<"Player B scores 2 point(s)"<<endl;
				b+=2;
			}
		}
		else if(v[i]==11 && i+1<n && fun(v,i+1)){
			if(i%2==0){
				cout<<"Player A scores 1 point(s)"<<endl;
				a+=1;
			}
			else{
				cout<<"Player B scores 1 point(s)"<<endl;
				b+=1;
			}
		}
	}
	cout<<"Player A: "<<a<<" point(s)"<<endl;
	cout<<"Player B: "<<b<<" point(s)";
	return 0;
}
