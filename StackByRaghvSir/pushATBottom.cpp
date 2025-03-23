#include<bits/stdc++.h>
using namespace std;
void print(stack<int>&st){
      stack<int>s;
            while(st.size()>0){
        //cout<<st.top()<<" ";
        s.push(st.top());
        st.pop();
    }
    cout<<endl;
    //printing in the right way
    while(s.size()>0){
        cout<<s.top()<<" ";
        st.push(s.top());
        s.pop();
    }
    cout<<endl;
}
void insertAtbottom(stack<int>&st,int val){
              stack<int>temp;
             while(st.size()>0){
                 int x=st.top();
                 temp.push(x);
                 st.pop();
             }
             st.push(val);
             while(temp.size()>0){
                int ele=temp.top();
                st.push(ele);
                temp.pop();
             }
}
void insertAtIdx(stack<int>&st,int idx,int val){
    stack<int>temp;
    while(st.size()>idx){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int>st;
    stack<int>s;
    st.push(1);
    st.push(4);
    st.push(29);
    st.push(98);
    st.push(21);
   print(st);
   insertAtbottom(st,55);
   print(st);
   insertAtIdx(st,2,19);
   print(st);
}