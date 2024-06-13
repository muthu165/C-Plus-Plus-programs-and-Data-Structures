//#include<bits/stdc++.h>
//using namespace std;
//class complan{
//	private:
//		int real,imag;
//	public:
//		complan(int real=0,int imag=0){
//			this->real=real;
//			this->imag=imag;
//		}
//		complan operator+(complan &obj){
//			complan ans;
//			ans.real=real+obj.real;
//			ans.imag=imag+obj.imag;
//			return ans;
//		}
//		void out(){
//			cout<<real<<" + "<<"i"<<imag<<endl;;
//		}
//};
//int main(){
//	int a,b,c,d;
//	cin>>a>>b>>c>>d;
//	complan c1(a,b),c2(c,d);
//	complan c3=c1+c2;
//	c3.out();
//	c1.out();
//	c2.out();
//	return 0;
//	
//}

#include<stdio.h>
int main(){
	int i=0;
	for(i=0;i<5;i++){
		if(i<=2){
			printf("break");
			break;
		}
	}
	return 0;
	
}
