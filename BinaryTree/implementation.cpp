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
    int maxOfNode(Node* root){
        if(root==NULL) return INT_MIN;  //important to return INT_MIN
        return max(root->val,max(maxOfNode(root->left),maxOfNode(root->right)));
    }
    int levels(Node* root){
        if(root==NULL) return 0;
        return 1+max(levels(root->left),levels(root->right));
    }
    int heightOfNode(Node* root){
        if(root==NULL) return 0;
        return max(heightOfNode(root->left),heightOfNode(root->right));
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
        display(a);
        cout<<endl;
        cout<<sumOfTree(a)<<endl;
        cout<<sizeOfTree(a)<<endl;
        cout<<maxOfNode(a)<<endl;   
        cout<<levels(a)<<endl;
        return 0;
}