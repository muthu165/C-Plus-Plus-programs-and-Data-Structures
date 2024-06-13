#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* left;
		node* right;
		node(int val):data(val),left(nullptr),right(nullptr){
		}
};
class bt{
	private:
		node* root;
	public:
		bt():root(nullptr){}
		node* insert(vector<int>&v){
			if(v.empty()){
				return nullptr;
			}
			int i=0;
			root = new node(v[i++]);
			queue<node*>q;
			q.push(root);
			while(!q.empty() && i<v.size()){
				node* nn = q.front();
				q.pop();
				if(v[i]!=-1){

				nn->left = new node(v[i++]);
				q.push(nn->left);
				}
				if(i<v.size()){
					if(v[i]!=-1){
					nn->right = new node(v[i++]);
					q.push(nn->right);
				}
				}
			}
			return root;
		}
		void inorder(node *root){
			if(root){
				inorder(root->left);
				cout<<root->data<<" ";
				inorder(root->right);
			}
		}
		bool full(node *root){
			if(!root){
				return true;
			}
			if(!root->left && !root->right){
				return true;
			}
			if(root->left and root->right){
				return (full(root->left) && full(root->right));
			}
			return false;
		}
		
		
};
int main(){
	bt b;
	node* root = nullptr;
	vector<int>v;
	int t;
	while(cin>>t){
		if(t!=-1){
			v.push_back(t);
		}
		else{
			break;
		}
	}
	root = b.insert(v);
	b.inorder(root);
	cout<<endl;
	bool ans = b.full(root);
	cout<<ans<<endl;
	
	
}
