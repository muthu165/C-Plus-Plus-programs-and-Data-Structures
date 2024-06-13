#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
vector<int> a={1,2,3,1,3};
int i=0,j=0;
int count=0,temp=0;
for(i=0;i<a.size();i++){
    for(j=i+1;j<a.size();j++){
        // cout<<a[i]<<" "<<a[j]<<endl;
        temp=a[j]-a[i];
        if(abs(temp)>1){
            count+=temp;
        }
        if(abs(temp)<=1){
            count+=0;
        }
    }
}
cout<<count;
    return 0;
}