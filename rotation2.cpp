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
    d--;
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}

int main(){
    int arr[]={1,2,3,4,5};
    int d=6;
    int n=sizeof(arr)/sizeof(arr[0]);
    rotate(arr,d,n);


}





//#include<iostream>
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//vector<int> v {1,2,3,4,5};
//int d;
//cout<<"enter no of rotations: ";
//cin>>d;
//for(int i=0;i<d;i++){
//	v.push_back(v[i]);
//}
//for(int i=d;i<v.size();i++){
//	cout<<v[i]<<" ";
//}
//}

