#include<iostream>
using namespace std;
int main(){
    int arr[9]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    int maxSum=INT16_MIN;
    int preSum=0;
    int maxIdx=0;
    for(int i=0; i<k;i++){
        preSum+=arr[i];
    }
    maxSum=preSum;
    int i=1; int j=k;
    while(j<n){
        int currSum=preSum+arr[j]-arr[i-1];
        if(maxSum<currSum){
            maxSum=currSum;
            maxIdx=i;
        }
        preSum=currSum;
         i++;
         j++;
    }
    cout<<maxSum<<endl;
        cout<<maxIdx<<endl;
}