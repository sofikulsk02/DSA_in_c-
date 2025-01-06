#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int ans=0;
    for(int i=0;i<5;i++){
        for(int e=i;e<5;e++){
            int sum=0;
            for(int l=i;l<=e;l++){
                sum+=arr[l];
            }
            ans+=sum;
        }
    }
    cout<<ans;
}