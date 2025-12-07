#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
int minElenent(vector<int>& arr,int k){
   priority_queue<int,vector<int>,greater<int>>pq;
   int prod=1;
   for(auto ele:arr){
    prod*=ele;
    pq.push(ele);
   }
while(k--){
      int ele=pq.top();
      if(ele==0) return 0;
      pq.pop();
      prod/=ele;
      pq.push(-ele);
      prod*=(-ele);
}
return prod;
}
int main(){
       vector<int>arr={1,-2,2,10,-3,6};
       cout<<minElenent(arr,1);
}