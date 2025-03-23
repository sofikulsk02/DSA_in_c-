// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//      public:
//      int val;
//      Node* next;
//      Node(int val){
//         this->val=val;
//         this->next=NULL;
//      }
// };
// class Linkedlist{
//     public:
//         Node* head;
//         Node* tail;
//         int size;
//         Linkedlist(){
//             head=tail=NULL;
//             size=0;
//         }
//         void insertAtEnd(int val){
//             Node* temp=new Node(val);
//             if(size==0){
//                 head=tail=temp;
//             }
//             else{
//                 tail->next=temp;
//                 tail=temp;
//             }
//             size++;
//         }
//         void insertHead(int val){
//             Node* temp=new Node(val);
//             if(size==0) head=temp;
//             else{
//                 temp->next=head;
//                 head=temp;
//             }
//             size++;
//         }
//         void show(){
//             Node* temp=head;
//             while(temp!=NULL){
//                 cout<<temp->val<<" ";
//                 temp=temp->next;
//             }
//             cout<<endl;
//         }
//         void insertAtIdx(int idx,int val){
//             Node* temp=new Node(val);
//             if(size==0) insertHead(val);
//             else if(idx==size) insertAtEnd(val);
//             else{

//             }
//         }
// };
//  void display(Node* head){
//             Node* temp=head;
//             while(temp!=NULL){
//                 cout<<temp->val<<" ";
//                 temp=temp->next;
//             }
//             cout<<endl;
//      }
// int size(Node* head){
//     Node* temp=head;
//     int count=0;
//     while(temp!=NULL){
//         count++;
//         temp=temp->next;
//     }
//     return count;
// }
// int main(){
    //    Node* a=new Node(10);
    //    Node* b=new Node(20);
    //    Node* c=new Node(30);
    //    Node* d=new Node(40);
    //    Node* e=new Node(50);
    //    Node* f=new Node(60);
    //    Node* g=new Node(70);
    //    Node* h=new Node(80);
    //    a->next=b;
    //    b->next=c;
    //    c->next=d;
    //    d->next=e;
    //    e->next=f;
    //    f->next=g;
    //    g->next=h;
    //     display(a);
    //     cout<<size(a);
//         Linkedlist ll;
//         ll.insertHead(10);
//         ll.show();
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
class Linkedlist{
      public:
       Node* head;
       Node* tail;
       int size;
       Linkedlist(){
        this->head=NULL;
        this->tail=NULL;
        this->size=0;
       }
       void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
       }
       void insertAtHead(int val){
        Node* temp=new Node(val);
        if(size==0){
             head=tail=temp;
             size++;
        }
        else{
            temp->next=head;
            head=temp;
            size++;
        }
       }
      void insertIdx(int val, int idx){
           Node* temp=head;
           Node* t=new Node(val);
            if(idx==0) insertAtHead(val);
            else if(idx==size){
                 insertAtTail(val);
            }
            else{
                 for(int i=0; i<idx-1;i++){
                    temp=temp->next;
                 }
                  t->next=temp->next;
            temp->next=t;
            }
            size++;
      }
      void insertAtTail(int val){
        Node* temp=new Node(val);
        if(size==0) insertAtHead(val);
        else {
            tail->next=temp;
            tail=temp;
            size++;
        }
    }
    void deleteHead(){
        head=head->next;
        size--;
    }
    void deleteTail(){
        Node* temp=head;
        while(temp->next->next=NULL){
            temp=temp->next;
        }
          temp->next=NULL;
          tail=temp;
        size--;
    }
};
int main(){
   Linkedlist ll;
   ll.insertAtHead(10);
   ll.display();
   ll.insertAtTail(20);
   ll.display();
   ll.insertIdx(99,1);
   ll.display();
   ll.deleteTail();
   ll.display();  
}