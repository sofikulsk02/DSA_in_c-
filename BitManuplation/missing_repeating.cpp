#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,4,5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int xr=0;
    for(int i=0; i<n;i++){
        xr=xr^arr[i];
        xr=xr^(i+1);
    }
    int bit_no=0;
    while(1){
        if((xr & (1 << bit_no))!=0) break;
           bit_no++;
    }
    int zero=0;
    int one=0;
    for(int i=0; i<n;i++){
        if((arr[i] & (1<<bit_no))!=0){
            one=one^arr[i];
        }
        else{
            zero=zero^arr[i];
        }
    }
    for(int i=1; i<n;i++){
        if((i& (1<<bit_no))!=0){
            one=one^i;
        }
        else{
            zero=zero^i;
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==zero) count++;
    }
    if(count==2) {
        cout << zero << " " << one << endl;
    } else {
        cout << one << " " << zero << endl;
    }
    return 0;
}