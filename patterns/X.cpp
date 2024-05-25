#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the row number and it should be odd: ";
    cin>>row;
    for(int i=1; i<=row; i++){
        for(int j=1; j<=row; j++){
            if(i==j || (i+j)==row+1){
                cout<<"*";
            }
            else{
                cout<<" ";            }
        }
        cout<<endl;
    }
    }
