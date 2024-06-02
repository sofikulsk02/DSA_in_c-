#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>&q){
    int n=q.size();
    for(int i=0; i<n; i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void reverse(queue<int>&q){
    stack<int>st;
    //empty the queue into a stack
    int n=q.size();
    for(int i=0; i<n; i++){
        int x=q.front();
        q.pop();
        st.push(x);
    }
    //empty the stack in queue
    while(q.size()<n){
        int x=st.top();
        st.pop();
        q.push(x);
    }
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    // q.pop();
    // display(q);
    reverse(q);
    display(q);
}