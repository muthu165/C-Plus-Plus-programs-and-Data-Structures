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
	node *reverse(node *head){
		 node *prev=nullptr;
        node *cur=head;
        node *next=nullptr;
        while(cur!=nullptr){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        head = prev;
        return head;
	}
	
	void addone(){
		if(head==nullptr){
			cout<<"nullptr"<<endl;
			return;
		}
		head = reverse(head);
		node *current = head;
		int carry = 1;
		while(current!=nullptr){
			int sum = current->data+carry;
			current->data = sum%10;
			carry = sum/10;
			if(carry==0) break;
			if(current->next==nullptr){
				node *nn = new node(carry);
				current->next = nn;
				break;
			}
			current = current->next;
		}
		head = reverse(head);
		display();
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
			ll.iend(t);
		}
		else{
			break;
		}
	}
//	ll.display();
	ll.addone();
	
}
