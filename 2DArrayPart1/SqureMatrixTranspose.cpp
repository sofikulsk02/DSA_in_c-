#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the squre matrix size:";
    cin>>m;
    int arr[m][m];
    for(int i=0; i<m;i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<m;i++){
        for(int j=i+1; j<m; j++){
            int temp=arr[j][i];
            arr[j][i]=arr[i][j];
            arr[i][j]=temp;
        }
    }
    for(int i=0; i<m;i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
}