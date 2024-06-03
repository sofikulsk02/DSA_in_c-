#include<iostream>
#include<stack>
#include<queue>
// class Node{
//     public:
//     int val;
//     Node* next;
//     Node* haed;
//     Node* tail;
//     public:
//     Node(int val){
//         this->next=next;
//         this->val=val;
//           haed=NULL;
//           tail=NULL;
//     }
//      void enQueue(){
//         Node* temp=new Node(val);
//         head=temp;
//     }
   
   
// };
using namespace std;
void display(queue<int>&q){
    int n=q.size();
    for(int i=0; i<n; i++){
 int x=q.front();
 cout<<x<<" ";
    q.pop();
    q.push(x);
    }
}; 
void removeFromEven(queue<int>&q){
    int n=q.size();
    stack<int>st;
    for(int i =0; i<n; i++){
       int x=q.front();
         st.push(x);
         q.pop();
    }
    for(int i=0; i<n ;i++){
        if(i%2==0){
            int y=st.top();
            q.push(y);
            st.pop();
        }
    }
}
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    display(q);
}
