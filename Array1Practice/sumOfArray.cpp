#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the array size:";
    cin>>n;
    int sum=0;
    int arr[n];
    cout<<"Enter the array element: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    cout<<"The sum of this array is "<<sum;
}