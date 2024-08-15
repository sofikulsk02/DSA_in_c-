// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cout<<"Enter size of array: ";
//    cin>>n;
//    int arr[n];
//     cout<<"Enter the elements:";
//    for(int i=0; i<n; i++){
//     cin>>arr[i];
//    }
//    int x;
//     cout<<"Enter the number you want to find:";
//    cin>>x;

//    //check marks
//    bool flag=false;
//    for(int i=0; i<n; i++){
//     if(arr[i]==x){
//        flag=true;
//     }
// }
// if(flag==true) cout<<"element found";
// else cout<<"404 element not found";
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   bool flag=false;
   int x;
   cin>>x;
   int idx;
   int arr[n];
   for(int i=0; i<n ; i++){
      cin>>arr[i];
   }
   for(int i=0; i<n;i++){
      if(arr[i]==x) {
         flag=true;
         idx=i;
      }
   }
   if(flag==true) cout<<"found at index"<<idx<<"\n";\
   else cout<<"Not present";
}