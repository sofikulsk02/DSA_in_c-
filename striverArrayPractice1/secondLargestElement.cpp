#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,3,45,6,78,11};
    int maxElement=INT_MIN;
    int secondMax=INT_MIN;
    for(int i=0;i<6;i++){
        if(arr[i]>maxElement){
            maxElement=arr[i];
        }
    }
    for(int i=0;i<6;i++){
        if(arr[i]!=maxElement && secondMax<arr[i]){
            secondMax=arr[i];
        }
    }
    cout<<secondMax<<endl;
}