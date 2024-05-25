#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the array size:";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int oddsum=0; 
    int evensum=0;
    int sum=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            sum+=arr[i];
             evensum+=arr[i];
        }
        else {
            sum-=arr[i];
            oddsum-=arr[i];
        }
    }
    cout<<"oddsum="<<oddsum<<"evensum="<<evensum<<"And difference is="<<sum;
    }