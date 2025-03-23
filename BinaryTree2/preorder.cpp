#include<iostream>
using namespace std;
class TreeNode{
        public:
        int val;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int val){
            this->val=val;
            this->right=NULL;
            this->left=NULL;
        }
};
void display(TreeNode* root){
     if(root==NULL) return ;
     cout<<root->val<<" ";
     display(root->left);
     display(root->right);
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
    display(a);
}