#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
     vector<int>v;
       v[0]=arr[0];
     for(int i=1; i<5; i++){
         v[i]=v[i-1]+arr[i];
     }
     for(int i=0; i<5; i++){
        cout<<v[i]<<" ";
     }
}