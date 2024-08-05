#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int arr[5];
    int idx;
    Stack(){
        int idx=-1;
    }
void push(int val){
         idx++;
         arr[idx]=val;
}
void pop(){
    if(idx==-1) cout<<"The stack is empty";
    else idx--;
}

int  size(){
  return idx+1;
}

int top(){
    return arr[idx];
}
void display(){
    for(int i=0; i<idx; i++){
        cout<<arr[idx]<<" ";
    }
}
    
};
int main(){
   Stack st;
  st.pop();
}