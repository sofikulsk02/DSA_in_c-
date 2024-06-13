#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the array size";
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  int x;
  cout<<"Enter the target element";
  cin>>x;
  bool flag=false;
  int lo=0; int hi=n-1;
  int mid=lo+(hi-lo)/2;
  while(lo<=hi){
    if(arr[mid]==x){
     return mid;
    }
    else if(arr[mid]>x){
      hi=mid-1;
    }
    else{
      lo=mid+1; 
    }
  }
  return -1;
}