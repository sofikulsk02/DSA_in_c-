#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=next;
        this->prev=prev;
    }
};
class Deque{
    Node* head;
    Node* tail;
    int size;
    Deque(){
        head=tail=NULL;
        size=0;
    }
void pushBack(int val){
    Node* temp=new Node(val);
    if(size==0){
        head=temp;
        tail=temp;
    }
    else{
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
    size++;
}
void pushFront(int val){
    Node* temp=new Node(val);
    if(size==0){
        head=temp;
        tail=temp;
    }
    else{
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    size++;
}
};
int main(){

}