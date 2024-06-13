#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* next;
		node(int val):data(val),next(nullptr){}
};
class linkedlist{
	private:
		node *head;
	public:
		linkedlist():head(nullptr){}
		
	void insert(int val){
		node *nn = new node(val);
		if(head==nullptr){
			head = nn;
			return;
		}
		node *cur = head;
		while(cur->next!=nullptr){
			cur = cur->next;
		}
		cur->next = nn;
	}
	
	node *reverse(node *head,int k,int n){
		if(!head) return nullptr;
		node *prev = nullptr;
		node *cur = head;
		node *next = nullptr;
		int c=0;
//		TO MAKE THE REMAINING ELEMENTS (i.e: N<K) UNCHANGED....
		if(n<k){
			return head;
		}
		while(cur!=nullptr && c<k){
			next = cur->next;
			cur->next = prev;
			prev = cur;
			cur = next;
			c++;
			n--;
		}
		if(next!=nullptr){
			head->next = reverse(next,k,n);
		}
		return prev;
	}
	
	void display(){
		node *cur = head;
		while(cur!=nullptr){
			cout<<cur->data<<" ";
			cur=cur->next;
		}
		cout<<endl;
	}
	
	void reversek(int k,int n){
		head = reverse(head,k,n);
	}
	
};
int main(){
	linkedlist ll;
	
	int n,t,a;
	cin>>n;
	a=n;
	while(n--){
		cin>>t;
		ll.insert(t);
	}
	int k;
	cin>>k;
	ll.reversek(k,n);
	ll.display();
	return 0;
}
