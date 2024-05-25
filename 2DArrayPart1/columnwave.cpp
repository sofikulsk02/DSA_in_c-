#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the row no:";
    cin>>m;
    int n;
    cout<<"Enter the row no:";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the array elements:";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0; i<n; i++){
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
    cout<<endl;
}



