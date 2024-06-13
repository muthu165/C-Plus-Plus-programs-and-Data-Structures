#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	int data;
	node *next;
	node(int value):data(value),next(nullptr) {}
};
class linkedlist{
	private:
		node *head;
	public:
		linkedlist():head(nullptr) {}
	
	void ibeg(int value){
		node *newnode = new node(value);
		newnode->next = head;
		head = newnode;
		return;
	}
	
	void iend(int value){
		node *newnode = new node(value);
		if(head==nullptr){
			newnode->next  = head;
			head = newnode;
			return;
		}
		node *current = head;
		while(current->next!=nullptr){
			current = current->next;
		}
		current->next = newnode;
	}
	
	void ipos(int value,int pos){
		node *newnode = new node(value);
		if(pos==0){
			newnode->next = head;
			head = newnode;
			return;
		}
		node *current = head;
		for(int i=0;i<pos-1&&current!=nullptr;i++){
			current = current->next;
		}
		if(current==nullptr){
			cout<<"Invalid Position...";
		}
		newnode->next = current->next;
		current->next = newnode;
	}
	void display(){
		node *current = head;
		while(current!=nullptr){
			cout<<current->data<<" ";
			current = current->next;
		}
		cout<<endl;
	}
	
	void idel(int value){
		if(head==nullptr){
			cout<<"List is empty..\n";
			return;
		}
		if(head->data==value){
			node *temp = head;
			head = head->next;
			delete temp;
			return;
		}
		node *current = head;
		while(current->next!=nullptr && current->next->data!=value){
			current = current->next;
		}
		if(current->next == nullptr){
			cout<<"Node not found..\n";
			return;
		}
		node *temp = current->next;
		current->next = current->next->next;
		delete temp;
	}
	
	void search(int value){
		node *current = head;
		while(current != nullptr){
			if(current->data == value){
				cout<<"True node"<<value<<" is found..\n";
			}
			current = current->next;
		}
		cout<<"Node not found..\n";
	}
	
	void update(int ol,int nl){
		node *current = head;
		while(current != nullptr){
			if(current->data == ol){
				current->data = nl;
				return;
			}
			current = current->next;
		}
		cout<<"Node not found..\n";
	}
	
};
int main(){
	linkedlist ls;
	ls.ibeg(3);
	ls.ibeg(2);
	ls.ipos(4,1);
	ls.ipos(1,0);
	ls.iend(6);
	ls.iend(7);
	ls.ipos(9,5);
	ls.display();
	ls.update(9,7);
	ls.search(7);
	ls.display();
	
}
