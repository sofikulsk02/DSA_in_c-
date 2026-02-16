#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Array size:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the target element:";
    cin>>x;
    bool flag=false;
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            flag=true;
        }
    }
    if(flag==true){
        cout<<"Element found";
    }
    else{
        cout<<"Not found";
    }
}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//       int n;
//       cout<<"Enter the number of how many element you want"<<endl;
//       cin>>n;
//       vector<int>v;
//       for(int i=0;i<n;i++){
//          cin>>v[i];   
//       }
//       int idx=-1;
//       int x;
//       cout<<"Enter the target elemet"<<endl;
//       cin>>x;
//       for(int i=0;i<n;i++){
//          if(v[i]==x){
//             idx=i;
//          }
//       }
//     cout<<idx;
// }