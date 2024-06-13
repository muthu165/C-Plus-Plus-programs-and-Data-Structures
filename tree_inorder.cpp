#include<bits/stdc++.h>
using namespace std;
class treenode{
	public:
		int data;
		treenode *left;
		treenode *right;
		treenode(int val): data(val), left(nullptr), right(nullptr) {}
};

class bst{
	private:
		treenode *root;
		
		treenode *insert(treenode *node,int val){
			if(!node)
				return new treenode(val);
			if(val<node->data)
				node->left = insert(node->left,val);
			else if(val>node->data)
				node->right = insert(node->right,val);
				
			return node;
		}
		
		treenode *inorder(treenode *node,vector<int>&res){
			if(node){
			
			inorder(node->left,res);
			res.emplace_back(node->data);
			inorder(node->right,res);
		}
		}
		
		
	public:
		bst(): root(nullptr) {}
		
		void insert(int val){
			root = insert(root,val);
		}
		
		void inorder(){
			vector<int> res;
			inorder(root,res);
			for(int x:res){
				cout<<x<<endl;
			}
			cout<<endl;
		}
};



int  main(){
	bst b;
	while(true){
		int a;
		cin>>a;
		if(a<1){
			break;
		}
		b.insert(a);
	}
	b.inorder();
}
