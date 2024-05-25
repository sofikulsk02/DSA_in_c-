#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Row:";
    cin>>m;
    int n;
    cout<<"Column:";
    cin>>n;
    int arr[m][n];
    cout<<"Elements:";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<m; i++){
       if(i%2==0){
        for(int j=0;j<n; j++){
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