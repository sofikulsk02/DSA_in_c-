#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the array size:";
    cin>>n;
    int arr[n];
    cout<<"Enter the element:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max=INT16_MIN;
    for(int i=0; i<n; i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"The maximum array element is "<<max;
}