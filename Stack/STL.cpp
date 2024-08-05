#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
     stack<int>temp;
    while(st.size()>0){
           int x=st.top();
           temp.push(x);
           st.pop();
    }
    while(temp.size()>0){
        stack<int>rajib;
        int x=temp.top();
        cout<<x<<" ";
        rajib.push(x);
        temp.pop();
    }
}