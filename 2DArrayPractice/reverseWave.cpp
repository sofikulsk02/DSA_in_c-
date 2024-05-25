#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the row no of the natrix:";
    cin>>m;
    int n;
    cout<<"Enter the col no of the matrix:";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the array elements:";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=m-1; i>=0; i--){
        if(i%2==0){
            for(int j=0; j<n; j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int k=n-1;k>=0; k--){
                cout<<arr[i][k]<<" ";
            }
        }
        cout<<endl;
    }
}