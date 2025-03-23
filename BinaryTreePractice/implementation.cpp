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
void display(Node* root){
    if(root==NULL) return ;
    cout<<root->val<<" "; 
    display(root->left);
    display(root->right);
}
int sumOfTree(Node* root){
    if(root==NULL) return 0;
     return root->val+sumOfTree(root->left)+sumOfTree(root->right);
}
int sizeOfTree(Node* root){
    if(root==NULL) return 0;
    return 1+sizeOfTree(root->left)+sizeOfTree(root->right);    
}
int main(){

}