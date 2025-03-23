#include<bits/stdc++.h>
using namespace std;
class Node{
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=this->right=NULL;
    }
};
Node* levelOrderQueue(int arr[],Node* root){
        // Node* root=new Node(arr[0]);
         queue<Node*>q;
         int i=1;
         int j=2;
        //  while(q.size()>0 && i<=n)
}
int main(){
    int arr []={1,2,3,INT_MIN,4,5,INT_MIN,6,7,INT_MIN,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    // Node* root=construct();
    // levelOrderQueue(root);
}