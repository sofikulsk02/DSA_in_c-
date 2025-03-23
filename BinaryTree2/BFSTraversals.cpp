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
void nThLevel(Node* root,int currLevel,int level){
    if(root==NULL) return;
    if(currLevel==level){
        cout<<root->val<<" ";
        return;
    }
    nThLevel(root->left,currLevel+1,level);
    nThLevel(root->right,currLevel+1,level);
}
void nThLevelRev(Node* root,int currLevel,int level){
    if(root==NULL) return;
    if(currLevel==level){
        cout<<root->val<<" ";
        return;
    }
    nThLevelRev(root->right,currLevel+1,level);
     nThLevelRev(root->left,currLevel+1,level);
}
void levelOrderQueue(Node* root){   //* this code will print the nodes from left to right
       queue<Node*>q;
       q.push(root);
       while(q.size()>0){
        Node* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(!temp->left==NULL) q.push(temp->left);
        if(!temp->right==NULL) q.push(temp->right);
       }
       cout<<endl;   
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
    nThLevel(a,1,3);
    cout<<endl;
    nThLevelRev(a,1,3);
    cout<<endl;
    levelOrderQueue(a);
}