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
class Linkedlist{
    public:
    Node* head;
    Node* tail;
    int size;
    Linkedlist(){
        head=NULL;
        tail=NULL;
        size=0;
    }
    void insertAtHead(int val){
        Node* temp=new Node(val);
        if(size==0){
            head=temp;
            tail=temp;
        }
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void insert(int val){
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
    void insertAtIdx(int idx,int val){
        Node* t=new Node(val);
        Node* temp=head;
        if(idx==0) insertAtHead(val);
        else if(idx==size) insert(val);
        else{
            for(int i=0; i<idx-1; i++){
                temp=temp->next;
            }
          t->next=temp->next;
          temp->next=t;
        }
        size++;
    }
    void deleteHead(){
        if(size==0) cout<<"The List is already empty"<<endl;
        head=head->next;
        size--;
    }
    void deleteEnd(){
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
        size--;
    }
    void deleteAtIdx(int idx){
        if(idx==0) cout<<"The list is already empty";
        else if(idx==size-1) deleteEnd();
        else if(idx==1) deleteHead();
        else{
            Node* temp=head;
            for(int i=1; i<=idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
        }
        size--;
    }
 void display(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
 }
 int sizeofLL(){
    int count=0;
     Node* temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
 }
};
int main(){
  Linkedlist ll;
  ll.insertAtHead(10);
  ll.display();
  cout<<ll.sizeofLL()<<endl;
  ll.insert(100);
  ll.display();
  cout<<ll.sizeofLL()<<endl;
  ll.insert(980);
  ll.display();
  cout<<ll.sizeofLL()<<endl;
  ll.insertAtHead(587);
  ll.display();
  cout<<ll.sizeofLL()<<endl;
  ll.insertAtIdx(1,587);
  ll.display();
  cout<<ll.sizeofLL()<<endl;
  ll.deleteHead();
  ll.display();
  cout<<ll.sizeofLL()<<endl;
  ll.deleteEnd();
  ll.display();
  cout<<ll.sizeofLL()<<endl;
  ll.deleteAtIdx(3);
  ll.display();
  cout<<ll.sizeofLL()<<endl;
}