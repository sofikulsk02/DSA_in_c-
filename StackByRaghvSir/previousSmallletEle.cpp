//stock span
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={100,80,60,70,60,75,85};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int ans[n];
    ans[0]=1;
    stack<int>st;
    st.push(ans[0]);
    for(int i=1; i<n;i++){
         int count=1;
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
            count++;
        }
        st.push(count);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
