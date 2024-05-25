#include<iostream>
using namespace std;
int main(){
    int arr[9]={1,3,4,5,7,8,9,13,25};
    int n=9;
    int x=7;
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
      int mid=lo+(hi-lo)/2;
      if(arr[mid]==x){
         cout<<mid;
         break;
      }
    else if(arr[mid]>x) hi=mid-1;
    else{
        lo=mid+1;
    }
    }
}