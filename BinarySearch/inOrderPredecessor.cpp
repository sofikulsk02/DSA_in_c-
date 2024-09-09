#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
     Node* left;
     Node* right;
     int val;
     Node(int val){
          this->val=val;
          this->left=NULL;
          this->right=NULL;
     }
};
Node* arrayToBST(vector<int>&arr,int lo, int hi){
    int mid=lo+(hi-lo)/2;
    Node* root=new Node(arr[mid]);
    root->left=arrayToBST(arr,lo,mid-1);
    root->right=arrayToBST(arr,mid+1,hi);
    return root;
}
void buildBST(Node* root,int val){
    if(root==NULL) return;
    else if(root->val>val){//go left
          if(root->left==NULL){
            root->left=new Node(val);
          }
          else {
            buildBST(root->left,val);
          }
    }
    else {
        if(root->right==NULL){
            root->right=new Node(val);
        }
        else{
            buildBST(root->right,val);
        }
    }
}
Node* Predecessor(Node* root){
    if(root->left==NULL) return NULL;
    Node* pred=root->left;
    while(pred->right!=NULL){
        pred=pred->right;
    }
    return pred;
}
Node* successer(Node* root){
    if(root->right==NULL) return root;
    Node* sucuess=root->right;
    while(sucuess->left!=NULL){
        sucuess=sucuess->left;
    }
    return sucuess;
}
void display(Node* root){
    if(root=NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int main(){
      Node* a=new Node(10);
      Node* b=new Node(20);
      Node* c=new Node(30);
      Node* d=new Node(40);
      Node* e=new Node(50);
      Node* f=new Node(60);
      Node* g=new Node(70);
      a->left=b;
      a->right=c;
      b->left=d;
      b->right=e;
      c->left=f;
      c->right=g;
      display(a);
}