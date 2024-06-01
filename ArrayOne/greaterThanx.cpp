#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the number that would be the least amoung the chosen one:";
    cin>>x;
    int count=0;
    bool flag=false;
    for(int i=0; i<n; i++){
        if(arr[i]>x){
            flag=true;
            count++;
        }
    }
    if(flag==true){
        cout<<"There are "<<count<<" numbers that are greater than "<<x;
    }
    else{
        cout<<"There is no elements greater than "<<x;
    }
    return 0;

}