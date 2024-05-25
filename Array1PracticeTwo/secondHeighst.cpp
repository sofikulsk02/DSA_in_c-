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
    int max=INT16_MIN;
    int smax=INT16_MIN;
    int tmax=INT16_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>max) max=arr[i];
    }
    for(int i=0; i<n; i++){
        if(smax<arr[i] && arr[i]!=max){
            smax=arr[i];
        }
    }
    for(int j=0; j<n; j++){
        if(tmax<arr[j] && arr[j]!=smax && arr[j]!=max){
            tmax=arr[j];
        }
    }
    cout<<"The second heighst element in the array is"<<smax<<endl;
    cout<<"The third  heighst element in the array is"<<tmax;
}