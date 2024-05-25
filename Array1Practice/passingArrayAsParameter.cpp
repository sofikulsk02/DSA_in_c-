#include<iostream>
using namespace std;
void display(int arr[], int size){
for(int i=0; i<size;i++){
    cout<<arr[i]<<" ";
}
}
void change(int b[],int size){
  b[0]=100;
}
int main(){
    int arr[5]={1,2,3,45,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    display(arr,size);
    change(arr,size);
    display(arr,size);
}
