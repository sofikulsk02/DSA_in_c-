#include<iostream>
using namespace std;
void rev(int arr[],int n){
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Elements:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int i=0; int  j=n-1;
   while(i<=j){
        int temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
        i++;
        j--;
   }
   for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
}