// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node* next;
//     Node(int val){
// this->val=val;
// this->next=NULL;
//     }
// };

// class Linkedlist{
//     public:
//     Node* head;
//     Node* tail;
//     int size;
//     Linkedlist(){
//         head=tail=NULL;
//         size=0;
//     }
//     void insertAtEnd(int val){
//         Node* temp=new Node(val);
//         if(size==0){
//             head=temp;
//             tail=temp;
//         }
//         else{
//             tail->next=temp;
//             tail=temp;
//         }
//         size++;

//     }
//     void insertAtHead(int val){
//         Node* temp=new Node(val);
//         if(size==0){
//             head=temp;
//             tail=temp;
//         }
//         else{
//             temp->next=head;
//             head=temp;
//         }
//         size++;

//     }
//     void insertAtIdx(int idx ,int val){
//         Node* temp=new Node(val);
//         if(idx<0 || idx >size){
//            cout<<"Invalid index"<<endl;
//         }
//         else if(idx==0) insertAtHead(val);
    
//        else if(idx==size) insertAtEnd(val);
//         else{
//             Node* t= new Node(val);
//             Node * temp= head;
//           for(int i=0; i<idx-1;i++){
//                temp=temp->next;
//           }
//           t->next=temp->next;
//           temp->next=t;
//           size++;
//         }
//         size++;

//     }
//         void display(){
//         Node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }
//         cout<<endl;
//     }
//     void deleteAtHead(){
//         if(size==0){
//              cout<<"List is empty";
//              return;
//         }
//         head=head->next;
//         size--;
//     }
//     void deleteAtTail(){
//         if(size==0){
//              cout<<"List is empty";
//              return;
//         }
//         Node* temp=head;
//         while(temp->next!=tail){
//             temp=temp->next;
//         }
//         temp->next=NULL;
//         tail=temp;
//         size--;
//     }
//     void deleteAtIndex(int idx){
//         if(size==0){
//             cout<<"List is empty";
//             return;
//         }
//        else if(idx<0 || idx>=size){
//         cout<<"Invalid index";
//         return;
//        }
//        else if(idx==0)  return deleteAtHead();
//        else if(idx==size-1) return deleteAtTail();
//        else{
//         Node* temp=head;
//         for(int i=1; i<=idx-1; i++){
//             temp=temp->next;
//         }
//         temp->next=temp->next->next;
//         size--;
//        }
//     }
// };
// void insertAtEnd(Node* head,int val){
//     Node* t=new Node(val);
//     while(head->next!=NULL){
//         head=head->next;
//     head->next=t;
// }
// };
// int main(){
//  Linkedlist ll;
//  Node* a=new Node(80);
//  ll.insertAtEnd(10);
//  ll.display();
//  ll.insertAtEnd(20);
//  ll.display();
//  ll.insertAtEnd(30);
//  ll.display();
//  ll.insertAtHead(333);
//  ll.display();
//  ll.insertAtHead(100);
//  ll.display();
//  ll.insertAtIdx(3,99);
//  ll.display();
//  ll.deleteAtHead();
//  ll.display();
//  ll.deleteAtTail();
//  ll.display();
//  ll.deleteAtIndex(1);
//  ll.display();
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
            head=NULL;
            tail=NULL;
            size=0;
         }
         void insertAtEnd(int val){
            Node* temp=new Node(val);
            if(size==0) {
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
                 if(size==0) {
                    head=tail=temp;
                 }
                 else{
                    temp->next=head;
                    head=temp;
                 }
                 size++;
         }
         void insertAtIdx(int idx,int val){
            if(idx<0 || idx>size){
                cout<<"Invalid index";
            }
            else if(idx==0) {
                insertAtHead(val);
            }
            else if(idx==size){
                insertAtEnd(val);
            }
            else{
                Node* temp=new Node(val);
            Node* t=new Node(val);
                  t=head;
                for(int i=0; i<idx-1;i++){
                    temp=temp->next;
                }
                t->next=temp->next;
                temp->next=t;
                
            }
            size++;
         }
         void deleteAtHead(){
            if(size==0){
                cout<<"List has no item";
                return;
            }
            else{
                head=head->next;
                size--;
            }
         }
         void deleteAtTail(){
            if(size==0){
                cout<<"Empty list";
                return;
            }
            Node* temp=head;
           while(temp->next!=tail){
                     temp->next=NULL;
                     tail=temp;
                     size--;
           }
          
         }
         void deleteAtIdx(int idx){
            if(idx<0 || idx>size){
                cout<<"Invalid idx";
                return;
            }
            if(size==0){
                cout<<"Empty list";
                return;
            }
            else if(idx==0){
                deleteAtHead();
            }
            else if(idx==size-1){
                deleteAtTail();
            }
            else{
                Node* temp=head;
                for(int i=0; i<=idx-1; i++){
                    temp=temp->next;
                }
                temp->next=temp->next->next;
                size--;
            }
         }
      void display(){
         Node* temp=head;
         if(temp!=NULL) return ;
         while(temp!=NULL) {
               cout<<temp->val<<" ";
               temp=temp->next;
         }
  };
};
int main(){
        Linkedlist ll;
        ll.insertAtEnd(5);
        ll.display();

}