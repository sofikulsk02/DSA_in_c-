#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={4,1,5,15,62};
    int l=INT16_MAX;
    int h=INT16_MIN;
    int k=2;
    for(int i=0; i<6;i++){
        if(arr[i]<l) l=arr[i];
        if(arr[i]>h) h=arr[i];
    }
    while(l<h){
        int count=0;
        int mid=(h+l)/2;
        for(int i=0; i<6;i++){
            if(arr[i]<=mid){
                count++;
            }
        }
        if(count>k) h=mid-1;
        else if(count<k) l=mid+1;
        else cout<<arr[mid];

    }
}