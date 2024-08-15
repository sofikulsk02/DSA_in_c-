#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
          int val;
          Node* next;
          Node(int val){
                this->val=val;
                this->next=next;
          }
};
class Linkedlist{
    public:
    Node* head;
    Node* tail;
    int size;
    Linkedlist(){
        head=tail=NULL;
        size=0;
    }
    void insertAtHead(int val){
        Node* temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
    void insertAtTail(int val){
        Node* temp=new Node(val);
        if(size==0){
            insertAtHead(val);
        }
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void insertAtIdx(int val,int idx){
        
        if(idx<0 || idx>size){
            cout<<"Invalid idx";
        }
        else if(idx==0){
            insertAtHead(val);
        }
        else if(idx==size){
            insertAtTail(val);
        }
        else{
              Node* temp=new Node(val);
              Node* t=head;
              for(int i=0; i<idx-1; i++){
                t=t->next;
              }
              t->next=temp;
              temp->next=t->next->next;
        }
        size++;
    }
};
int main(){
    Linkedlist ll;
    ll.insertAtHead(10);
    ll.display();
}