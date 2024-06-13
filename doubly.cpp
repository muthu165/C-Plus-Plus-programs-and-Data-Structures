#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	int data;
	node *f;
	node *next;
	node(int value):data(value),f(nullptr),next(nullptr) {}
};
class linkedlist{
	private:
		node *head;
		node *temp;
	public:
		linkedlist():head(nullptr){}
	void insert(int val){
		node *nn = new node(val);
		if(head==nullptr){
			head = nn;
			temp = nn;
		}
		else{
			temp->next = nn;
			nn->f = temp;
			temp=nn;
		}
	}
	void display(){
		node *current = head;
		while(current!=nullptr){
			cout<<current->data<<" ";
			current = current->next;
		}
		cout<<endl;
	}
};
int main(){
	linkedlist ll;
	int t;
	while(cin>>t){
		if(t!=-1){
			ll.insert(t);
		}
		else{
			break;
		}
	}
	ll.display();
}
