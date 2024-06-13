#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node *next;
		node(int val):data(val),next(nullptr){}
};
class linkedlist{
	private:
		node *head;
	public:
		linkedlist():head(nullptr){}
	void iend(int val){
		node *nn = new node(val);
		if(head==nullptr){
			nn->next = head;
			head = nn;
			return;
		}
		node* current = head;
		while(current->next!=nullptr){
			current=current->next;
		}
		current->next = nn;
	}
	node *reverse(node* head){
		node* p = nullptr;
		node* c = head;
		node* n = nullptr;
		while(c!=nullptr){
			n = c->next;
			c->next = p;
			p = c;
			c = n;
		}
		return p;
	}
	bool palindrome(){
		node *slow = head;
		node *fast = head;
		while(fast!=nullptr && fast->next!=nullptr){
			slow = slow->next;
			fast = fast->next->next;
		}
		
		node *secondpartr = reverse(slow);
		node *firstpart = head;
		while(secondpartr!=nullptr){
			if(firstpart->data!=secondpartr->data){
				return false;
				break;
			}
			firstpart = firstpart->next;
			secondpartr = secondpartr->next;
		}
		return true;
	}
	
};
int main(){
	linkedlist ll;
	int t;
	while(cin>>t){
		if(t!=-1) ll.iend(t);
		else break;
	}
	if(ll.palindrome()){
		cout<<"True";
	}
	else{
		cout<<"False";
	}
}
