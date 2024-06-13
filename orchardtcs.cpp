#include<bits/stdc++.h>
using namespace std;
int per(string& a,int n){
	int i,j,k;
	int c=0;
	for(i=0;i<n-2;i++){
		for(j=i+1;j<n-1;j++){
			for(k=j+1;k<n;k++){
				if(a[i]!=a[j] && a[i]==a[k]){
					c++;
				}
			}
		}
	}
	return c;
}
int main(){
	string s1,s2;
	cin>>s1>>s2;
	int x = per(s1,s1.size());
	int y = per(s2,s2.size());
	if(x>y){
		cout<<"Ashok";
	}
	else if(x==y){
		cout<<"Draw";
	}
	else if(x==0 || y==0){
		cout<<"Invalid input";
	}
	else if(y>x){
		cout<<"Anand";
	}
	
}
