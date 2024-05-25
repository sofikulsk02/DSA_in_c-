#include<iostream>
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
    void insertAtEnd(int val){
        Node* temp=new Node(val);
        if(size==0){
            head=temp;
            tail=temp;
        }
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;

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
    void insertAtIdx(int idx ,int val){
        Node* temp=new Node(val);
        if(idx<0 || idx >size){
           cout<<"Invalid index"<<endl;
        }
        else if(idx==0) insertAtHead(val);
    
       else if(idx==size) insertAtEnd(val);
        else{
            Node* t= new Node(val);
            Node * temp= head;
          for(int i=0; i<idx-1;i++){
               temp=temp->next;
          }
          t->next=temp->next;
          temp->next=t;
          size++;
        }
        size++;

    }
        void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
void insertAtEnd(Node* head,int val){
    Node* t=new Node(val);
    while(head->next!=NULL){
        head=head->next;
    head->next=t;
}
};
int main(){
 Linkedlist ll;
 Node* a=new Node(80);
 ll.insertAtEnd(10);
 ll.display();
 ll.insertAtEnd(20);
 ll.display();
 ll.insertAtEnd(30);
 ll.display();
 ll.insertAtHead(333);
 ll.display();
 ll.insertAtHead(100);
 ll.display();
 ll.insertAtIdx(3,99);
 ll.display();
}