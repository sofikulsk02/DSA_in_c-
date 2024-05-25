#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter size of array: ";
   cin>>n;
   int arr[n];
   for(int i=0; i<n; i++){
    cin>>arr[i];
   }
   int max=arr[0];
   for(int i=1; i<n; i++){
    if(max<arr[i]){
        max=arr[i];
    }
   }
 int smax=INT16_MIN;
 for(int i=0; i<n; i++){
if(smax<arr[i] && arr[i]!=max){
    smax=arr[i];
}
 }
 cout<<"The second heighest element is:"<<smax;
}
