#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the row number:";
    cin>>m;
    int n;
    cout<<"Enter the col no:";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the elements of the matrix:";
    for(int i=0; i<m; i++){
        for(int j=-0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<m; i++){
        if(i%2==0){
            for(int j=0; j<n; j++){
                cout<<arr[j][i]<<" ";
            }
        }
        else{
            for(int k=n-1; k>=0; k--){
                cout<<arr[k][i]<<" ";
            }
        }
    }
}