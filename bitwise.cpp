#include <bits/stdc++.h>
using namespace std;
int log(int x,int base){
	return static_cast<int>(log(x)/log(base));
}
void fun(vector<int>&v){
    int res=0;
    for(int x:v){
        res^=x;
    }
    int k = log(res&-res,2);
    int x=0,y=0;
    for(int i:v){
    	if(i & (1<<k)!=0){
    		x^=i;
		}
		else{
			y^=i;
		}
	}
	cout<<"The odd  value nos are "<<x<<" and "<<y;
    
}

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    fun(v);

    return 0;
}
