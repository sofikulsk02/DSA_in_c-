#include<iostream>
using namespace std;
int main(){
    int m;
    int n;
    cin>>m>>n;
    int arr[m][n];
    cout<<"Enter the array elements:";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    int midr=m/2+1;
    int midc=n/2+1;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(i==midr-1 || j== midc-1){
                cout<<arr[i][j];
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}