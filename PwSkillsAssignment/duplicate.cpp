#include<bits/stdc++.h>
using namespace std;
int main(){
    bool flag=false;
    int n;
    cin>>n;
    int nums[n];
    unordered_map<int,int>m;
    for(int i=0; i<n;i++){
        cin>>nums[i];
        m[nums[i]]++;
    }
    for(auto ele:m){
        if(ele.second>1) flag=true;;
    }
   cout<<flag<<endl;
}