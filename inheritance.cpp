#include<bits/stdc++.h>
#include<string>
using namespace std;
class parent{
	public:
		void fun(string str,int n){
//		stringstream s(str);
		int arr[n];
		int w=0;
		for(int i=0;i<n;i++){
			int a=str[i]-'0';
			arr[i]=a;
		}
//		while(s>>w){
//			
////			int a=stoi(w);
//			arr[i]=w;
//			i++;
//		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				w+=arr[i]+arr[j];
			}
		}
		cout<<w;
		
	}
};
class mmain: public parent{
	public:
	mmain(string s,int n){
		
		fun(s,n);
		
	}
};
int main(){
	string s;
	cin>>s;
	int n;
	n=s.length();
//	parent p;
//	p.fun(s,n);
	mmain m(s,n);
	return 0;
}
