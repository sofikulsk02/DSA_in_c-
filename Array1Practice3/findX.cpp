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
    bool flag=false;
    int x;
    cout<<"Enter the target elements:";
    cin>>x;
    for(int i=0; i<n; i++){
        if(x==arr[i]){
            flag=true;
        }
    }
    if(flag==true){
        cout<<"Element found";
    }
    else{
        cout<<"Error element not found";
    }
}