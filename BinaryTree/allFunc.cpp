#include<iostream>
using namespace std;
class TreeNode{
        public:
        int val;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int val){
            this->val=val;
            this->right=right;
            this->left=left;
        }
};
void display(TreeNode* root){
     if(root==NULL) return ;
     cout<<root->val<<" ";
     display(root->left);
     display(root->right);
}
int sumOfTree(TreeNode* Node){
    if(Node==NULL) return 0;
    return Node->val+sumOfTree(Node->left)+sumOfTree(Node->right);
}
int sizeOfTree(TreeNode* Node){
    if(Node==NULL) return 0;
    return 1+sizeOfTree(Node->left)+sizeOfTree(Node->right);
}
int levels(TreeNode* root){
    if(root==NULL) return 0;
    return 1+ max(levels(root->left),levels(root->right));
}
void preOrder(TreeNode* root){
    if(root==NULL)  return ;
    cout<<root->val<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void printWithLevel(TreeNode* root,int &n){
           int  level=levels(root);
            if(level==n){
             preOrder(root);
            }
}
int main(){
          TreeNode* a=new TreeNode(1);
    TreeNode* b=new TreeNode(7);
    TreeNode* c=new TreeNode(9);
    TreeNode* d=new TreeNode(2);
    TreeNode* e=new TreeNode(6);
    TreeNode* f=new TreeNode(9);
    TreeNode* g=new TreeNode(5);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
  
   
    display(a);
}