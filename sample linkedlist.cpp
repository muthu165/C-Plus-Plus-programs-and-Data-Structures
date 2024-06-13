#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node *next;
		node(int value): data(value), next(nullptr) {}
};
class linkedlist{
	private:
		node *head;
	public:
		linkedlist(): head(nullptr) {}
		
	void ibeg(int value){
		node *newnode = new node(value);
		newnode->next =  head;
		head = newnode;
	}
	
	void iend(int value){
		node *newnode = new node(value);
		if(head==nullptr){
			head = newnode;
			return;
		}
		node *current = head;
		while(current->next!=nullptr){
			current=current->next;
		}
		current->next = newnode;		
	}
	
	void ipos(int val,int pos){
		node *newnode = new node(val);
		if(pos==0){
			newnode->next = head;
			head = newnode;
			return;
		}
		node *current = head;
		for(int i=0;i<pos-1&&current!=nullptr;i++){
			current = current->next;
		}
		if(current == nullptr){
			cout<<"Invalid position"<<endl;
			return;
		}
		newnode->next = current->next;
		current->next = newnode;
	}
	
	void del(int data){
		if(head==nullptr){
			cout<<"List is empty!"<<endl;
			return;
		}
		if(head->data==data){
			node *temp = head;
			head = head->next;
			delete temp;
			return;
		}
		node *current = head;
		while(current->next!=nullptr && current->next->data!=data){
			current = current->next;
		}
		if(current->next==nullptr){
			cout<<"Node not found!"<<endl;
			return;
		}
		node *temp = current->next;
		current->next = current->next->next;
		delete temp;	
	}
	bool search(int data){
		node *current = head;
		while(current!=nullptr){
			if(current->data==data){
				return true;
			}
			current = current->next;
		}
		return false;
	}
	
	void display(){
		node *current = head;
		while(current!=nullptr){
			cout<<current->data<<" ";
			current = current->next;
		}
		cout<<endl;
	}
	
	void update(int o,int n){
		node *current = head;
		while(current!=nullptr){
			if(current->data==o){
				current->data=n;
				return;
			}
			current=current->next;
		}
		cout<<"Node not found"<<endl;
	}
	
};
int main(){
	linkedlist ls;
	ls.ibeg(10);
	ls.ibeg(9);
	ls.ibeg(7);
	ls.iend(11);
	ls.iend(12);
	ls.ipos(8,1);
	ls.ipos(13,6);
	ls.ipos(14,7);
//	ls.display();
	ls.update(14,15);
	ls.del(10);
//	ls.del(20);
//	cout<<ls.search(15)?cout<<"found":cout<<"not found";
	ls.display();
	
	
	
	
	
	
	
	
}
