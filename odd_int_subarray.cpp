#include<bits/stdc++.h>
using namespace std;
int ans=0;
void fun(vector<int>& x){
	int c=0;
	int n = x.size();
	for(int i=0;i<n;i++){
		if(x[i]%2!=0){
			c++;
			int ind = i+1;
			while(ind<n && x[ind]%2!=0){
//				if(x[ind]%2!=0){
					c++;
					ind++;
//				}
//				else{
//					break;
//				}
}
				ans = max(ans,c);
			    c=0;
			
			
		}
	}
}
int main(){
	int n,k;
	cin>>n>>k;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int s=0;
	while(s<n){
		vector<int> x(v.begin(),v.end());
		int a=0,ind=0;
		for(int i=s;i<n && a<k;i++){
			if(x[i]%2==0){
				a++;
				x.erase(x.begin()+i);
				i--;
				n--;
			}
			ind=i;
//			else i++;	
		}
		
		fun(x);
//		for(int d:x){
//			cout<<d<<" ";
//		}
//		cout<<endl;
		s++;
	}
	
	cout<<ans;
	
}
