#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[n];
    int sum=0;
    cout<<"Enter the array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0; j<n;j++){
        if(arr[j]%2==0) sum+=arr[j];
        else sum-=arr[j];
    }
    cout<<"The difference between the even and odds is :"<<sum;
}