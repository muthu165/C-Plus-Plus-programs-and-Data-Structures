#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int comp(){
      int b,g,i,j;
	    int sum=0;
	    cout<<"enter b and g: "<<endl;
	    cin>>b>>g;
	    vector<int> v(g,0);
	    cout<<"enter values: "<<endl;
	    for(i=0;i<b;i++){
	        sum=0;
	        for(j=0;j<g;j++){
	            int temp;
	            cin>>temp;
	            if(temp==1){
	            	v[j]++;
				}
//	            sum+=temp;
	            }
//	            v[i]=sum;
	    }
	    int collision=0;
	    for(int i=0;i<g;i++){
	    	collision+=(v[i]>1 ?(v[i]*(v[i]-1))/2 : 0);
		}
		return collision;
}
int main() {
	int a;
	cout<<"enter no of times: "<<endl;
	cin>>a;
	int i=0,j=0;
	while(a!=0){
	   int res= comp();
	   cout<<res<<endl;
	    a--;
	}
	return 0;
}
