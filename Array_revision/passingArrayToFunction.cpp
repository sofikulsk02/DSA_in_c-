#include<bits/stdc++.h>
using namespace std;
void display(int arr [],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void change(int arr[]){
    cout<<"Enetr in which position you want to insert your value"<<endl;
    int i;
    cin>>i;
    int value;
    cout<<"Enter your value"<<endl;
    cin>>value;
    arr[i]=value;
}
int main(){
     int arr []={1,2,3,4,5,};
     int n=sizeof(arr)/sizeof(arr[0]);
     display(arr,n);
     change(arr);
     cout<<endl;
     display(arr,n);
}