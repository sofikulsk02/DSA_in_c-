#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    bool flag=true;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    for(int i=0; i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                int temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
                flag=false;
            }
        }
        if(flag==true){
            break;
        }
    }
    for(int i=0; i<n;i++){
        cout<<v[i]<<" ";
    }
}

//no of swaps n(n+1)/2;
// it is stable sort:if have multiple duplicate value then the relative ordering will not change