#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr;
        for(int i=0; i<n;i++){
            cin>>arr[i];
        }
        int totalCoins=0;
        int needed=0;
        sort(arr.begin(),arr.end());
        for(int i=0; i<n;i++){
            totalCoins+=arr[i];
            if(totalCoins>=k){
                break;
            }
        }
        needed=k-totalCoins;
        cout<<needed<<endl;
    }
}