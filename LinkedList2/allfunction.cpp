#include<iostream>
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
          void insertAtEnd(int val){
            Node* temp=new Node(val);
             if(size==0){
               head=temp;
               tail=temp;
             }
             else{
                tail->next=temp;
                temp=tail;
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
          void insertAtIndex(int idx, int val){
            Node* t=new Node(val);
            Node* temp=head;
              if(idx<0 || idx >size){
           cout<<"Invalid index"<<endl;
        }
        else if(idx==0) insertAtHead(val);
    
       else if(idx==size) insertAtEnd(val);
            for(int i=0; i<idx-1; i++){
                temp->next=temp;
            }
            t->next=temp->next;
          temp->next=t;
          size++;
          }
};
int main(){
    
}