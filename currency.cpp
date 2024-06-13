#include<bits/stdc++.h>
using namespace std;
void currency(int amt){
	int notes[10]={2000,500,200,100,50,20,10,5,2,1};
	int ans[10]={0};
	for(int i=0;i<10;i++){
		if(amt>=ans[i]){
			ans[i]=amt/notes[i];
			amt=amt%notes[i];
		}
	}
	cout<<"Currency Count"<<endl;
	for(int i=0;i<10;i++){
		if(ans[i]!=0){
			cout<<notes[i]<<" : "<<ans[i]<<endl;
		}
	}
}
int main(){
	cout<<"enter value for n:  ";
	int n;
	cin>>n;
	if(n==0){
		cout<<"invalid"<<endl;
	}
	else{
	currency(n);
}
return 0;
}
