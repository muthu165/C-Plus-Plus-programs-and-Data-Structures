#include <iostream>
using namespace std;
int main() {
unsigned int n=1010111100001111,c=0;
while(n!=0){
    if(n&1){
        c++;
    }
    n>>=1;
    
}
cout<<c;
}
