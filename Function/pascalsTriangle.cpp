#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=0; i<=n; i++){
        for(int k=0;k<=n-i; k++){
            cout<<" ";
        }
        int current=1;
        for(int j=0; j<=i; j++){
cout<<current<<" ";
current=current*(i-j)/(j+1);
        }
        cout<<endl;
    }
}
