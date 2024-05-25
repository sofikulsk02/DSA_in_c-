#include<iostream>
using namespace std;
int main(){
    int arr[9]={1,2,3,3,3,4,8,5,10};
    int n=9;
    int x=3;
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
       int mid=lo+(hi-lo)/2;
       if(arr[mid]==x){
           if(arr[mid-1]!=x){
            cout<<mid;
            break;
           }
           else{
            hi=mid-1;
           }
       }
       else if(arr[mid]>x) {
        hi=mid-1;
       }
       else{
        lo=mid+1;
       }
    }
    return -1;
}