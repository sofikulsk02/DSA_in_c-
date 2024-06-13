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
class Queue{
      public:
      Node* head;
      Node* tail;
      int size;
      Queue(){
        head=tail=NULL;
        size=0;
      }
      void push(int val){
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
      void pop(){
        if(size==0) {
            cout<<"Queue is empty"<<endl;
            return;
        }
          Node* temp=head;
            head=head->next;
            size--;
        delete(temp);//wastage nahi ho rahi
      }
      int front(){
        if(size==0) {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else{
            return head->val;
        }
      }
       int back(){
            if(size==0){
                cout<<"Queue is empty"<<endl;
                return -1;
            }
            else{
                return tail->val;
            }
        }
        void display(){
            Node* temp =head;
            while(temp!=NULL){
                cout<<temp->val<<" ";
                temp=temp->next;
            }
             cout<<endl;
        }
        int sizeOf(){
            return size;
        }
        bool isEmpty(){
            if(size==0) return true;
            else return false;
        }
};
int main(){
  Queue q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.pop();
  q.display();
}