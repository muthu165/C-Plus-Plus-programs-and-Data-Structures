#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void swap();
int main() {
    // Write C++ code here
int n=5;
int k=0;
// vector<int> a={4,5,2,1,3};
// vector<int> b={5,4,3,2,1};
int a[n]={5,4,2,1,3};
int b[n];
int g=0;
for(int i=n;i>0;i--){
    b[g]=i;
    g++;
}


int temp=0;
int count=0;
k=3;
// while(k!=0){
for(int i=0;i<n;i++){
    
    if(b[i]!=a[i]){
        count++;
        int x=b[i];
        for(int j=0;j<n;j++){
            
            if(a[j]==x){
                
                 
                int z=j;
                temp=a[z];
                a[z]=a[i];
                a[i]=temp;
                
                //  break;
                // k--;
               
            // }
             
        }
        
         
    }
   
}
    
}

        for(int i=0;i<n;i++){
    cout<<a[i]<<endl;}
    
    cout<<count<<endl;
    // else{
    //     cout<<"unknown";
    // }

for(int i=0;i<n;i++){
   ;
}


    return 0;
}