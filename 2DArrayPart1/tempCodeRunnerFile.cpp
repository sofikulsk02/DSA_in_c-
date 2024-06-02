m #include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the size of the squrer matrix:";
    cin>>m;
    int arr[m][m];
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }