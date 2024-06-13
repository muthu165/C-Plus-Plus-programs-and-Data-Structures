#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
//	bool x = false;

	long long place = 1;
	long long t = abs(n);
	while(t>9){
		t/=10;
		place*=10;
	}

	while(place>0){
		long long dig = static_cast<int>(n/place)%10;
		cout<<dig*place<<" ";
		place/=10;
	}

	
}
