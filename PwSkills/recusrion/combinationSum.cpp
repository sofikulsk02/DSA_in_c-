#include<bits/stdc++.h>
using namespace std;
void combination(vector<int>v,int arr[],int target,int n,int idx){
        if(target==0){
             for(int i=0;i<v.size();i++){
                cout<<v[i];
             }
             cout<<endl;
             return;
        }
        if(target<0) return;
        for(int i=idx;i<n;i++){
           v.push_back(arr[i]);
           combination(v,arr,target-arr[i],n,i);
           v.pop_back();
        }
}
int main(){
    int target=8;
    int arr[]={2,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    combination(v,arr,target,n,0);
}