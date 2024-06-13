#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n ;i++){
        cin>>arr[i];
    }
    int lo=0; int hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]>arr[mid+1]) hi=mid-1;
        else if(arr[mid]<arr[mid+1]) lo=mid+1;
    }
}