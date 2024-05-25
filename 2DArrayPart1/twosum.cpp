#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the row no:";
    cin>>m;
    int n;
    cout<<"Enter the col no:";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the array elements:";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[m][n];
        }
    }

  int x;
  cout<<"Enter the target no :";
  cin>>x;
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        for(int k=i+1;k<=m-1; k++){
            for(int t=j+1; j<=n-1; t++){
                if(arr[i][j]+arr[k][t]==x){
                   cout<<"this is enough";
                }
            }
        }
    }
  }
}
