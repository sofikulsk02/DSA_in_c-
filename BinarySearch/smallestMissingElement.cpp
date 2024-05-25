#include<iostream>
using namespace std;
int main(){
    int arr[9]={0,1,2,4,5,6,8,49,34};
    int n=9;
    int ans=-1;
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
       int mid=lo+(hi-lo)/2;
        if(arr[mid]==mid) {
            hi=mid-1;
        }
        else{
            
        }
    }
    cout<<ans;
}