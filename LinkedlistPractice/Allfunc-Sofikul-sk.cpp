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
           head=tail=NULL;
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
    void insertAtTail(int val){
        Node* temp=new Node(val);
        if(size==0){
            insertAtHead(val);
        }
        else{
            tail->next=temp;
            tail=temp;
            size++;
        }
    }
    void insertAtIdx(int idx, int val){
        if(idx<0 || idx>size){
            cout<<"Invalid idx";
            return;
        }
        else if(idx==0){
            insertAtHead(val);
        }
        else if(idx==size){
            insertAtTail(val);
        }
        else{
             Node* t=new Node(val);
             Node* temp=head;
             for(int i=1; i<=idx-1; i++){
                temp=temp->next;
             }
            t->next=temp->next;
             temp->next=t;
             size++;
        }
    }
    void deleteHead(){
        if(size==0){
            cout<<"List is already empty";
            return;
        }
        else{
            head=head->next;
            size--;
        }
    }
    void deleteTail(){
        if(size==0){
            cout<<"Empty list";
            return;
        }
        else{
            Node* temp=head;
            while(temp->next!=NULL){

            }
        }
    }
    Node middle(){
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
       return slow->val;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    int sizeOfList(){
        Node* temp=head;
               int count=0;
            if(size==0) return 0;
          else{
            while(temp!=NULL){
                count++;
                temp=temp->next;
            }
          }
          return count;      
    }
};
int main(){
     Linkedlist ll;
     ll.insertAtHead(10);
     ll.display();
     ll.insertAtTail(20);
     ll.display();
     cout<<ll.sizeOfList()<<endl;
     ll.insertAtIdx(1,13);
     ll.display();
     cout<<endl;
     ll.middle();
     ll.display();
}