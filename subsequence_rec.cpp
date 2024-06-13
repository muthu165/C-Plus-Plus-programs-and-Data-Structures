//count
#include<bits/stdc++.h>
using namespace std;
int fun(int ind,int a[],int n,int sum,int k){
	if(sum>k){
		return 0;
//		base case used if array contains only positive values
	}
	if(ind==n){
		if(sum==k){
//		for(auto x:ds){
//			cout<<x<<" ";
//		}
//		if(ds.size()==0){
//			cout<<"{}";
//		}
		return 1;
		cout<<endl;
		}
		return 0;
	
	}
	
//	pick
//	ds.push_back(a[ind]);
	sum+=a[ind];
	
	int l = fun(ind+1,a,n,sum,k);
	
	sum-=a[ind];
//	ds.pop_back();
	
//	Not pick;
	int r = fun(ind+1,a,n,sum,k);
	
	return l+r;
	
	
}
int main(){
	int n=3;
	int a[]={1,2,1};
//	vector<int>ds;
	int k = 2;
	cout<<fun(0,a,n,0,k);
	return 0;
}
//#include<bits/stdc++.h>
//using namespace std;
//bool fun(int ind,vector<int>&ds,int a[],int n,int sum,int k){
//	if(ind==n){
//		if(sum==k){
//		for(auto x:ds){
//			cout<<x<<" ";
//		}
//		if(ds.size()==0){
//			cout<<"{}";
//		}
//		return true;
//		cout<<endl;
//		}
//		return false;
//	
//	}
//	
////	pick
//	ds.push_back(a[ind]);
//	sum+=a[ind];
//	
//	if(fun(ind+1,ds,a,n,sum,k)){
//		return true;
//	}
//	
//	sum-=a[ind];
//	ds.pop_back();
//	
////	Not pick;
//	if(fun(ind+1,ds,a,n,sum,k)){
//		return true;
//	}
//	
//	return false;
//	
//	
//}
//int main(){
//	int n=3;
//	int a[]={1,2,1};
//	vector<int>ds;
//	int k = 2;
//	fun(0,ds,a,n,0,k);
//	return 0;
//}
