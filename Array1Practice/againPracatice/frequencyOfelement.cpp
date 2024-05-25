#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the array element:";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int>v(n,0);
    for(int i=0; i<n; i++){
        arr[i]++;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}