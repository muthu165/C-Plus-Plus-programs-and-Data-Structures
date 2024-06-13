#include<bits/stdc++.h>
using namespace std;
class tnode{
	public:
		int data;
		tnode *left;
		tnode *right;
		tnode(int val): data(val), left(nullptr), right(nullptr){}
};

class bst{
	private:
		tnode *root;
		
		tnode *insert(tnode *root,int val){
			if(root==nullptr){
				return new tnode(val);
			}
			if(val<root->data){
				root->left = insert(root->left,val);
			}
			else if(val>root->data){
				root->right = insert(root->right,val);
			}
			
			return root;
		}
		
		tnode *inorder(tnode *root,vector<int>&ans){
			if(root){
				inorder(root->left,ans);
				ans.emplace_back(root->data);
				inorder(root->right,ans);
			}
			return root;
		}
		
		
		
	public:
		bst(): root(nullptr) {}
		
		void insert(int val){
			root = insert(root,val);
		}
		
		void inorder(){
			vector<int> ans;
			inorder(root,ans);
			for(int x:ans){
				cout<<x<<" ";
			}
			cout<<endl;
		}
};
int main(){
	bst b;
	while(1){
		int a;
		cin>>a;
		if(a<1){
			break;
		}
		b.insert(a);
		
	}
	b.inorder();
	
}
