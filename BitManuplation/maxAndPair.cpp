#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr []= {24,12,23,25,7,26,27,31};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=0;
    for(int i=31;i>=0;i--){
        int count=0;
        for(int j=0;j<n;j++){
            if((arr[j]>>i&1)==1){
                count++;
            }
        }
        if(count>=2){
            ans=ans | (1<<i);
            for(int j=0; j<n;j++){
                if((arr[j]>>i&1)==0) arr[j]=0;
            }
        }
    }
    cout<<ans;
    return 0;
}