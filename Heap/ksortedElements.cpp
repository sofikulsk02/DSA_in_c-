#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int k;
    cin>>k;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0; i<n;i++){
      pq.push(arr[i]);
      if(pq.size()>=k) pq.pop();
    }
}