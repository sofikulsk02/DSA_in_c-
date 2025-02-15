#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nums[n];
    int p=1;
    for(int i=0; i<n;i++){
        cin>>nums[i];
        p*=nums[i];
    }
    cout<<"The product is :"<<p<<endl;
}