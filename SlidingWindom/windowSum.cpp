#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[9]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    int maxsum=INT16_MIN;
    int maxidx=-1;
    int sum=0;
    for(int i=0; i<k;i++){
        sum+=arr[i];
    }
    int i=1,j=k;
    while(j<n){
        int currentSum=sum+arr[j]-arr[i-1];
        if(maxsum<currentSum){
            maxsum=currentSum;
            maxidx=i;
        }
        sum=currentSum;
        i++;
        j++;
    }
    cout<<maxsum<<" starting from->"<<maxidx<<endl;
}