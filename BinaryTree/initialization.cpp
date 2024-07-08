#include<iostream>
using namespace std;
class TreeNode{
    public:
      int val;
      TreeNode* left;
      TreeNode* right;
      TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
      }
};
void displayTree(TreeNode* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
};
int sumOfTree(TreeNode* root){
  if(root==NULL) return 0;
  return root->val+ sumOfTree(root->left)+sumOfTree(root->right);
}
int sizeOfTree(TreeNode* root){
  if(root==NULL) return 0;
  return 1+sizeOfTree(root->left)+sizeOfTree(root->right);
}
int maxOfTree(TreeNode* root){
  if(root==NULL) return INT16_MIN;
    return max(root->val, max(maxOfTree(root->left),maxOfTree(root->right)));
}
int levels(TreeNode* root){
  if(root==NULL) return 0;
  return 1+levels(root->left)+levels(root->right);
}
int main(){
    TreeNode* a=new TreeNode(10);
    TreeNode* b=new TreeNode(20);
    TreeNode* c=new TreeNode(30);
    TreeNode* d=new TreeNode(40);
    TreeNode* e=new TreeNode(50);
    TreeNode* f=new TreeNode(60);
    TreeNode* g=new TreeNode(70);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    displayTree(a);
   
}