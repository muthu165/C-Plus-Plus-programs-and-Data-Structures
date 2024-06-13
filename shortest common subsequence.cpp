#include<bits/stdc++.h>
using namespace std;
//method - 1
//int ss(const char *x,const char *y,int m,int n){
//	int l[m+1][n+1];
//	for(int i=0;i<=m;i++){
//		for(int j=0;j<=n;j++){
//			if(i==0 || j==0){
//				l[i][j]=0;
//			}
//			else if(x[i-1]==y[j-1]){
//				l[i][j] = l[i-1][j-1]+1;
//			}
//			else
//				l[i][j] = max(l[i-1][j],l[i][j-1]);
//		}
//	}
//	return m+n-l[m][n];
//}

int ss(const char *x,const char *y,int m,int n){
	if(!m) return n;
	if(!n) return m;
	if(x[m-1]==y[n-1]) return 1+ss(x,y,m-1,n-1);
	
	return 1+min(ss(x,y,m-1,n),ss(x,y,m,n-1));
}

int main(){
	string s1 = "LPEnIHKqQI";
	string s2 = "axYfGVbEnW";
	const char* x = s1.c_str();
	const char* y = s2.c_str();
	cout<<ss(x,y,s1.length(),s2.length());
	return 0;
}










