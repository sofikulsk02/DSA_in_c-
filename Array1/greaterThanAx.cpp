#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elemnet:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elments of the array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the number you want number greater than to be:";
    cin>>x;
    int count=0;
    bool flag=false;
    for(int i=0; i<n; i++){
        if(arr[i]>x){
            count++;
            flag=true;
        }
    }
    if(flag==true) cout<<"There are "<<count<<" "<<"numbers which are greater than "<<x;
    else cout<<"No numbers are greater than "<<x;
}