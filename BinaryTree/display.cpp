#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* right;
    Node* left;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }

};
void display(Node* root){
   if(root==NULL) return ;
   cout<<root->val<<" ";
   display(root->left);
   display(root->right);
}
int sumOfNodes(Node* root){
    if(root==NULL) return 0;
   int sumLeft=sumOfNodes(root->left);
   int sumRight=sumOfNodes(root->right);
    cout<<root->val+sumLeft+sumRight<<endl;
}
int maxNode(Node* root){
    if(root==NULL) return 0;
    int lmax=maxNode(root->left);
    int rmax=maxNode(root->right);
    return max(root->val,max(lmax,rmax));
}
int level(Node* root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
}
int main(){
      Node* a=new Node(10);
      Node* b=new Node(20);
      Node* c=new Node(30);
      Node* d=new Node(40);
      Node* e=new Node(50);
      Node* f=new Node(60);
      a->right=b;
      a->left=c;
      b->right=d;
      b->left=e;
      c->right=f;
      sumOfNodes(a);
        display(a);
    cout<<endl<<maxNode(a);
    cout<<endl<<level(a);
}