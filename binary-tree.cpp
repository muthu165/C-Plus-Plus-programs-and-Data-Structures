#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node *right;
    node(int val):data(val),left(nullptr),right(nullptr){}
};

class tree{
    private:
        node *root;
    public:
        tree():root(nullptr){}
    node* insert(int val){
            return new node(val);
    }
    
    node* value(vector<int>&v){
        if(v.empty()) return nullptr;
        queue<node*>q;
        int i=0;
        root = new node(v[i++]);
        q.push(root);
        while(!q.empty() && i<v.size()){
            node *c = q.front();
            q.pop();
            int data = v[i++];
            if(data!=-1){
                node *t = insert(data);
                c->left = t;
                q.push(t);
            }
            if(i<v.size()){
            data = v[i++];
            if(data!=-1){
                node *tt = insert(data);
                c->right = tt;
                q.push(tt);
            }   
            }
        } 
        return root;
    }
    void inorder(node *root){
        if(root==nullptr){
            return;
        }
        else{
            inorder(root->left);
            cout<<root->data<<" ";
            inorder(root->right);
        }
    }
};

int main() {
    tree tt;
      int t;
    vector<int>v;
    while(cin>>t){
         if(t!=-1){
            v.push_back(t);
        }
        
         else{
             break;
         }
    }
    node *root = tt.value(v);
    // v.push_back(-1);
    
    // tt.value(v);
    tt.inorder(root);
    return 0;
}
