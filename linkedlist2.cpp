#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node *next;
		node(int val){
			data = val;
			next = nullptr;
		}
};
class linkedlist{
	private:
		node *head;
		node *temp;
	public:
		linkedlist(){
			head = nullptr;
			temp = nullptr;
		}
		 void iend(int val){
		 	node *newnode = new node(val);
		 	if(head==nullptr){
		 		head = newnode;
		 		temp = newnode;
			 }
			 else{
			 	temp->next = newnode;
			 	temp = newnode;
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
	int n;
	cin>>n;
	int t;
	for(int i=0;i<n;i++){
		cin>>t;
		ll.iend(t);
	}
	ll.display();
	return 0;
}
