#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void rotate(int arr[],int d,int n){
    while(d!=0){
    for(int i=n-1;i>0;i--){
        int temp=arr[i];
        arr[i]=arr[0];
        arr[0]=temp;
    }
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
    d--;
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}

int main(){
    int arr[]={1,2,3,4,5};
    int d=4;
    int n=sizeof(arr)/sizeof(arr[0]);
    rotate(arr,d,n);


}