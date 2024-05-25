#include<iostream>
using namespace std;
int main(){
    int arr[7];
    cout<<"Enter the elements of array:";
    for(int i=0; i<7; i++){
        cin>>arr[i];
    }
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
}
