#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void rotation(int v[],int d)
{
	int temp[d];
	int n=5;
	for(int i=0;i<d;i++){
		temp[i]=v[i];
	}
	int x=0;
	for(int j=d;j<n;j++){
		v[x]=v[j];
		x++;
	}
 		int y=0;
	for(int j=n-d;j<n;j++){
		v[j]=temp[y];
		y++;
	}
		for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}

}
int main(){
	 int v[5]={2,3,4,5,6};
	int d=2;
	rotation(v,d);
	
}
