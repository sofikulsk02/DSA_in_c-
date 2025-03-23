#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    stack<int>s;
    st.push(1);
    st.push(4);
    st.push(29);
    st.push(98);
    st.push(21);
    while(st.size()>0){
        cout<<st.top()<<" ";
        s.push(st.top());
        st.pop();
    }
    cout<<endl;
    //printing in the right way
    while(s.size()>0){
        cout<<s.top()<<" ";
        s.top();
        s.pop();
    }
}