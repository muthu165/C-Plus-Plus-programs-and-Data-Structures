#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node *left;
		node *right;
		node(int val):data(val),left(nullptr),right(nullptr){
		}
};
class bstree{
	private:
		node *root;
	public:
		bstree():root(nullptr){
		}
	node *insert(node *root,int val){
		if(root==nullptr){
			return new node(val);
		}
		else if(val<root->data){
			root->left  = insert(root->left,val);
		}
		else{
			root->right = insert(root->right,val);
		}
		return root;
	}
	
	void inorder(node *root){
		if(root!=nullptr){
			
			inorder(root->left);
			cout<<root->data<<" ";
			inorder(root->right);
		}
	}
	
	node *deletee(node *root,int k){
		if(root==nullptr){
			return root;
		}
		if(root->data>k){
			root->left = deletee(root->left,k);
			return root;
		}
		else if(root->data<k){
			root->right = deletee(root->right,k);
			return root;
		}
//		ELEMENT FOUND
		
		if(root->left==nullptr){
			node *temp = root->right;
			delete root;
			return temp;
		}
		else if(root->right==nullptr){
			node *temp = root->left;
			delete root;
			return temp;
		}
		else{
			node *par = root;
			node *suc = root->right;
			while(suc->left!=nullptr){
				par = suc;
				suc = suc->left;
			}
			if(par!=root){
				par->left = suc->right;
			}
			else{
				par->right = suc->right;
			}
			
			root->data = suc->data;
			delete suc;
			return root;
		}
		
	}
	
};
int main(){
	node *root = nullptr;
	bstree tr;
	int t;
	while(cin>>t){
		if(t!=-1){
			root = tr.insert(root,t);
		}
		else{
			break;
		}
	}
	root = tr.deletee(root,50);
	tr.inorder(root);
	
}
