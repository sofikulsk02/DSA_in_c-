#include<iostream>
using namespace std;
int main(){
   int m;
   cout<<"Enter the row number :";
   cin>>m;
   int n;
   cout<<"Enter the columns no:";
   cin>>n;
   int arr[m][n];
   for(int i=0; i<m;i++){
    for(int j=0; j<n; j++){
        cin>>arr[i][j];
    }
   }
   for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
}