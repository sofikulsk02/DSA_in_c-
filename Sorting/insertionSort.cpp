#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        int j=i;
        // while(j>=1){
        //     if(arr[j]>=arr[j-1]){
        //         break;
        //     }
        //     else{
        //         swap(arr[j],arr[j-1]);
        //     }
        //     j--;
        // }

        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(auto ele:arr){
        cout<<ele<<" ";
    }
}

// time complexity is n^2
// best time is O(n)
// stable sorting algorythm