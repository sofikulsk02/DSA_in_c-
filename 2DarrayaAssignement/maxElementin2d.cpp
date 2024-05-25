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
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int max=INT16_MIN;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    cout<<"The max element in the array is "<<max;
}