// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 678;
    int b = 700;
    
    vector<int> v;
    while(a>0){
        v.emplace_back(a%10);
        a = a/10;
    }
   
    sort(v.begin(),v.end());
    vector<int> ans;
    do{
        // p --> permutation
        int p = 0; 
        for(int x:v){
            p = p*10+x;
        }
        ans.emplace_back(p);
    }while(next_permutation(v.begin(),v.end()));

     for(int i=0;i<ans.size();i++){
        if(ans[i]<b){
            
            ans.erase(ans.begin()+i);
            i--;
        }
    }
    cout<<endl;
    sort(ans.begin(),ans.end());
    cout<<ans[0];
    
    

    return 0;
}
