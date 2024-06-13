#include<bits/stdc++.h>
using namespace std;
class node{
public:
	int data;
	node *next;
	node(int val): data(val),next(nullptr) {}
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
		}
		
		void iend(int value){
			node *newnode = new node(value);
			if(head==nullptr){
				head = newnode;
				return;
			}
			node *current = head;
			while(current->next!=nullptr){
				current = current->next;
			}
			current->next= newnode;
		}
		
		void ipos(int value,int pos){
			node *newnode = new node(value);
			if(pos==0){
				newnode->next = head;
				head = newnode;
				return;
			}
			node *current = head;
			for(int i=0;i<pos-1 && current!=nullptr;i++){
				current = current->next;
			}
			if(current==nullptr){
				cout<<"Invalid position.\n";
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

		
};
int main(){
	linkedlist ll;
	ll.ibeg(4);
	ll.ibeg(3);
	ll.ibeg(2);
	ll.ibeg(1);
	ll.iend(6);
	ll.iend(7);
	ll.ipos(5,4);
	ll.display();
}






