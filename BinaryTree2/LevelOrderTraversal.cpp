#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=this->right=NULL;
    }
};
int levels(Node* root){
    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
}
void nThLevel(Node* root,int currLevel,int level){
    if(root==NULL) return;
    if(currLevel==level){
        cout<<root->val<<" ";
        return;
    }
    nThLevel(root->left,currLevel+1,level);
    nThLevel(root->right,currLevel+1,level);
}
void levelOrder(Node* root){
    if(root==NULL) return;
    int n=levels(root);
    for(int i=1;i<=n;i++){
        nThLevel(root,1,i);
        cout<<endl;
    }
}
int main(){
   Node* a=new Node(5);
    Node* b=new Node(4);
    Node* c=new Node(3);
    Node* d=new Node(6);
    Node* e=new Node(2);
    Node* f=new Node(1);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    levelOrder(a);
}