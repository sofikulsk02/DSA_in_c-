#include<iostream>
using namespace std;
void revPart(int arr[], int i , int j){
    while(i<=j){
        int temp=arr[j];
    arr[j]=arr[i];
    arr[i]=temp;
    i++;
    j--;
    }
}
void display(int arr[],int n){
    for(int i=0; i<n; i++){
          cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Array elements:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    display(arr,n);
    revPart(arr, 1,4);
    display(arr,n);
}