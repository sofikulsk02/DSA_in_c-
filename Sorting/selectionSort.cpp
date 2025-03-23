#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    //selection sort
    for(int i=0; i<n-1;i++){   

        int min=INT16_MAX;
        int mindex=-1;
        for(int j=i; j<n;j++){
            if(arr[j]<min){
                min=arr[i];
                mindex=j;
            }
        }
        swap(arr[i],arr[mindex]);
    }
    for(auto ele:arr){
        cout<<ele<<" ";
    }
}

// no of swaps n-1
// this is unstable sort 

// when to use:-
// 1.cost of swappig or k elements from an array