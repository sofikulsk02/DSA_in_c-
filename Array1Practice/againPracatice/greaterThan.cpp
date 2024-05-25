#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the array size:";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
 int x;
cout<<"Enter the number that you want to be greater than to be:";
cin>>x;
int count=0;
          bool flag=false;
         for(int i=0; i<n; i++){
            if(arr[i]>x) {
                flag =true;
                count++;
            }
         }
         if(flag==true){
            cout<<"There are "<<count<<"numbers which are greater than "<<x;
         }
         else{
            cout<<"There are no nuber which is greater than that of "<<x;
         }
}