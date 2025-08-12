#include<bits/stdc++.h>
using namespace std;
bool checkSum(int arr[], int n,int k){
     for(int i=0; i<(1<<n);i++){
        int sum=0;
        for(int j=0; j<n;j++){
            if((i>>j&1)==1){
                //the bit is set we have to consider that
               sum+=arr[j];
            }
        }
        if(sum==k) return true;
    }
    return false;
}
int main(){
    int arr[]={2 ,3, -6, 3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=9;
   cout<<checkSum(arr,n,k);
}