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
    int x;
    cout<<"Enter the number that you want to greater than to be:";
    cin>>x;
    bool flag=false;
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]>x){
            count++;
            flag=true;
        }
    }
if(flag==true){
    cout<<"There are "<<count<<" "<<"Numbers which are greater than "<<x;
}
else{
    cout<<"There are no number which is greater than "<<x;
}
}