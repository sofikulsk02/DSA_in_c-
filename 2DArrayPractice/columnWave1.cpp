#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int arr[m][m];
    cout<<"elements:";
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<m; i++){
       if(i%2==0){
        for(int j=0; j<m; j++){
            cout<<arr[j][i]<<" ";
        }
       }
         else{
            for(int k=m-1; k>=0; k--){
                cout<<arr[k][i]<<" ";
            }
        }
       }
       cout<<endl;
    }
