#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,4,6,5,7,9,4,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int ans[n];
    stack<int>st;
    ans[n-1]=-1;
    st.push(arr[n-1]);
    for(int i=n-2; i>=0; i--){
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        if(st.size()==0) ans[i]=-1;
        else ans[i]=st.top();

        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
  cout<<ans[i]<<" ";
    }
    cout<<endl;
}