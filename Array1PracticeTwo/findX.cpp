#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the array size:";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements:";
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the number you want to find:";
    cin>>x;
    bool flag=false;
    for(int i=0; i<n; i++){
        if(arr[i]==x) flag=true;
    }
    if(flag==true){
        cout<<"Element found";
    }
    else{
        cout<<"The number is not present in the array";
    }
    
}