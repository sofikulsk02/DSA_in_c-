#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Array size:";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the number you want to find:";
    cin>>x;
    bool flag=false;
    int idx;
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            flag=true;
            idx=i;
        }
        
    }
    if(flag==true){
        cout<<"Element found at index:"<<idx;
    }
    else{
        cout<<"element not found";
    }
}
