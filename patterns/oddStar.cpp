#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the row number it should be an odd number: ";
    cin>>row;
    int mid=row/2+1;
    for(int i=1; i<=row; i++){
for(int j=1; j<=row;j++){
    if( i==mid || j==mid){
        cout<<"*";
    }
    else{
        cout<<" ";
    }
}cout<<endl;
    }
}