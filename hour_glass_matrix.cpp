#include<bits/stdc++.h>
using namespace std;
const int N = 6;
int hg(int a[][6]){
	int isum=0;
	for(int i=0;i<N-2;i++){
		for(int j=0;j<N-2;j++){
			int sum = (a[i][j]+a[i][j+1]+a[i][j+2])+(a[i+1][j+1])+(a[i+2][j]+a[i+2][j+1]+a[i+2][j+2]);
			isum = max(isum,sum);
		}
	}
	return isum;
}
int main(){
	int a[6][6];
	cout<<"enter the values: ";
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cin>>a[i][j];
		}
	}
	int res = hg(a);
	cout<<"The hour glass value is: "<<res;
	return 0;
}
