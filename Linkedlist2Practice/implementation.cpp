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
        void insertAtEnd(int val){
            Node* temp=new Node(val);
            if(size==0){
                head=tail=temp;
            }
            else{
                tail->next=temp;
                tail=temp;
            }
            size++;
        }
        void insertHead(int val){
            Node* temp=new Node(val);
            if(size==0) head=temp;
            else{
                temp->next=head;
                head=temp;
            }
            size++;
        }
        void show(){
            Node* temp=head;
            while(temp!=NULL){
                cout<<temp->val<<" ";
                temp=temp->next;
            }
            cout<<endl;
        }
};
 void display(Node* head){
            Node* temp=head;
            while(temp!=NULL){
                cout<<temp->val<<" ";
                temp=temp->next;
            }
            cout<<endl;
     }
int size(Node* head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
int main(){
       Node* a=new Node(10);
       Node* b=new Node(20);
       Node* c=new Node(30);
       Node* d=new Node(40);
       Node* e=new Node(50);
       Node* f=new Node(60);
       Node* g=new Node(70);
       Node* h=new Node(80);
       a->next=b;
       b->next=c;
       c->next=d;
       d->next=e;
       e->next=f;
       f->next=g;
       g->next=h;
        display(a);
        cout<<size(a);
        Linkedlist ll;
        ll.insertHead(10);
        ll.insertAtEnd(20);
        ll.show();
}
       