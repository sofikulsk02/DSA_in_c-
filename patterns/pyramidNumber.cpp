#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<k;
        }
        for(int t=i-1; t>=1; t--){
            cout<<t;
        }
        cout<<endl;
    }
}