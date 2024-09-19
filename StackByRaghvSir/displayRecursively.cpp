#include<bits/stdc++.h>
using namespace std;
void print(stack<int>&st){
        if(st.size()==0) return ;
        cout<<st.top()<<" ";
        int x=st.top();
        st.pop();
        print(st);
        st.push(x);
}
int main(){
    stack<int>st;
    st.push(20);
    st.push(34);
    st.push(10);
    st.push(97);
    st.push(64);
    st.push(22);
    print(st);
}