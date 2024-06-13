#include<stdio.h>
float sum(float a,float b){
	float sum;
	sum=a+b;
	return sum;
}
int main(){
	float a=10.0;
	float b=20.8;
	float ans;
	ans=sum(a,b);
	printf("the sum is: %f",ans);
	return 0;
}
