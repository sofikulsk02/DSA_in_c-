#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->next=next;
        this->val=val;
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
void display(){
      Node* temp=head;
      while(temp!=NULL){
         cout<<temp->val<<" ";
        temp=temp->next;
      }
     cout<<endl;
}

};
int main(){
    Linkedlist ll;
    Node* a=new Node(80);
    ll.display();
    ll.insertAtEnd(10);
    ll.display();

}