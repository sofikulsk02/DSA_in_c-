#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the row size of both the vector";
    cin>>m;
    cout<<"Enter the col no of tboth the vector";
    cin>>n;
    int arr[m][n];
    int brr[m][n];
    cout<<"Enter the elements of the first matrix:";
    for(int i=0 ;i<m;i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the elements of the second matrix:";
    for(int i=0 ;i<m;i++){
        for(int j=0; j<n; j++){
            cin>>brr[i][j];
        }
    }

   int Result[m][n];
   for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        Result[i][j]=arr[i][j]+brr[i][j];
    }
   }
   cout<<endl;
   for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        cout<<Result[i][j]<<" ";
    }
    cout<<endl;
   }
   
}

