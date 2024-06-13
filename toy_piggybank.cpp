#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,x,y;
	cin>>t>>x>>y;
	int cur = x;
	int c=0;
	while(cur<t){
		for(int i=y;i<y+7;i++){
			cur+=i;
			c++;
//			cout<<cur<<" "<<i<<" "<<c<<endl;
			if(cur>=t){
				break;
			}
			
//			cout<<c<<endl;
		}
		y++;
		
	}
	cout<<"At the day "<<c<<" he can buy toy";
}
