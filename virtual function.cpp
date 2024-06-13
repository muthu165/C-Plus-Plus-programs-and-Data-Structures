#include<bits/stdc++.h>
using namespace std;
class shape{
	protected:
		int w,h;
	public:
		void lingesh(int w,int h){
			this->w=w;
			this->h=h;
		}
		virtual void muthu(){
			
		}
};
class triangle : public shape{
	void muthu(){
		int x=0.5*w*h;
		cout<<"triangle area is: "<<x<<endl;
	}
};
class square : public shape{
	void muthu(){
		cout<<"square area is: "<<w*h<<endl;
	}
};
int main(){
	int a,b;
	cin>>a>>b;
	shape *s;
	triangle t;
	square q;
	
	s=&t;
	
	s->lingesh(a,b);
	s->muthu();
	
	s=&q;
	s->lingesh(a,b);
	s->muthu();
	return 0;
	
}
