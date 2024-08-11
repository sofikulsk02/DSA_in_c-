// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node *next;
//     Node(int val){
//       this->val=val;
//       this->next=NULL;
//     }
// };
// void display(Node* head){
//     Node* temp=head;
//    while(temp!=NULL){
//      cout<<temp->val<<" ";
//     temp=temp->next;
//    }
//    cout<<endl;
// }
// int size(Node* a){
//      Node* temp=a;
//      int count=0;
//     while(temp!=NULL){
//         count++;
//         temp=temp->next;
//     }
//     return count;
// }
// int main(){
//        Node* a=new Node(10);
//        Node* b=new Node(20);
//        Node* c=new Node(30);
//        Node* d=new Node(40);
//        a->next=b;
//        b->next=c;
//        c->next=d;
//        display(a);
//        cout<<size(a);
// }


#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int val;
  Node* next;
  Node(int val){
    this->val=val;
    this->next=NULL;
  }
};
void display(Node* a){
    Node* temp=a;
    while(temp!=NULL){
      cout<<temp->val<<" ";
      temp=temp->next;
    }
  }
  void size(Node* head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
          count++;
          temp=temp->next;
    }
    cout<<count;
  }
  void revDisplay(Node* head){
     if(head==NULL) return;
     revDisplay(head->next);
     cout<<head->val<<" ";
  }
      int main(){
         Node* a=new Node(10);
         Node* b=new Node(20);
         Node* c=new Node(30);
         Node* d=new Node(40);
         a->next=b;
         b->next=c;
         c->next=d;
         display(a);
         cout<<endl;
         size(a);
         cout<<endl;
         revDisplay(a);
     }