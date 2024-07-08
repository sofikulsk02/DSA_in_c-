#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n,s;
        cin>>a>>b>>n>>s;
        for(int i=1 ; i<=a; i++){
           for(int j=1; j<=b; j++){
            if((i*n+j)==s){
                cout<<"YES";
                break;
            }
            else{
                cout<<"NO";
                break;
            }
        }
        }
       
    }
}