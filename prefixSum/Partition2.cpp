#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,5,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int idx=-1;
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    for(int i=0;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            idx=i;
        }
    }
    if(idx!=-1) cout<<"The array can be partitioned into two parts from index"<<idx;
    else cout<<"The partition can't be possible";
}