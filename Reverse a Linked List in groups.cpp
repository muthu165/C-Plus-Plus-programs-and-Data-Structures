#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
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
    int j=1;
    public:
        linkedlist():head(nullptr){}
    void iend(int val){
        node *newnode = new node(val);
        if(head==nullptr){
            newnode->next = head;
            head = newnode;
            return;
        }
        node *current = head;
        while(current->next!=nullptr){
            current=current->next;
            }
        current->next = newnode;
    
    }
   void reverse(int k){
       head = reverseutil(head,k);
   }
    node* reverseutil(node* head,int k){
        node *pre = nullptr;
        node *cur = head;
        node *next = nullptr;
        int c=0;
        while(c<k && cur!=nullptr){
            next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
            c++;
        }
        
        if(next!=nullptr){
            head->next = reverseutil(next,k);
        }
        return pre;
    }
    void display(){
        
        node *current = head;
        while(current!=nullptr){
            cout<<current->data<<" ";
            current = current->next;
        }
    }
};

int main() {
    linkedlist ll;
    int k,g;
    cin>>k;
    int n=0;
    while(cin>>g){
        ll.iend(k);
        k=g;
        n++;
    }
    
    ll.reverse(k);
    ll.display();
    return 0;
}
