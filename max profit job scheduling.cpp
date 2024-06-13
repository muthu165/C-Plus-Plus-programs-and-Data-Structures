#include<bits/stdc++.h>
using namespace std;
struct job{
	int start,finish,profit;
};

bool comparator(job a,job b){
//	sorting based on finish time
	return(a.finish<b.finish);
}

int collision(vector<job>&v,int n){
	for(int j=n-1;j>=0;j--){
		if(v[j].finish<=v[n-1].start) return j;
	}
	return -1;
}

int findprofit(vector<job>&v,int n){
	if(n==1) return v[n-1].profit;
	
	int inclusionp = v[n-1].profit;
	int i = collision(v,n);
	if(i!=-1){
		inclusionp+=findprofit(v,i+1);
	}
	int exclusionp=findprofit(v,n-1);
	return max(exclusionp,inclusionp);
}

int profit(vector<job>&v,int n){
	sort(v.begin(),v.end(),comparator);
	return findprofit(v,n);
}

int main(){
	int n;
	cin>>n;
	vector<job>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i].start;
		cin>>v[i].finish;
		cin>>v[i].profit;
	}
	cout<<"Optimal profit is : "<<profit(v,n);
}
