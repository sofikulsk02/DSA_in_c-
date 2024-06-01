#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: ";
    for(int i=0; i<n; i++){
         cin>>arr[i];
    }
    int x;
    cout<<"Enter the number you want to found; ";
    cin>>x;
     bool flag=false;
     int idx;
     for(int i=0; i<n; i++){
        if(arr[i]==x){
            idx=i;
            flag=true;
        }
     }
     if(flag==true){
        cout<<"Element found at index "<<idx;
     }
     else{
        cout<<"Element not present in the array";
     }
     return 0;
}
