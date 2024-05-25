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
   int min=INT16_MAX;
   for(int i=1; i<n; i++){
    if(min>arr[i]){
        min=arr[i];
    }
   }
   cout<<min;
}
