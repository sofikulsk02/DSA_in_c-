#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cout<<"Enter the number of elements in the array"<<endl;
     cin>>n;
     vector<int>v;
     cout<<"Enter the array elements";
     for(int i=0; i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
     }
     int x;
     cout<<"Enter the value you wnat to find";
     cin>>x;
     int idx=-1;
     for(int i=0; i<n;i++){
        if(v[i]==x){
            idx=i;
        }
     }
     if(idx!=-1){
        cout<<"The x is present at "<<idx+1<<"th position"<<endl;
     }
     else{
        cout<<"The number is not present";
     }
}