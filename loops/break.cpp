#include<iostream>
using namespace std;
int main(){
     int n;
     cin>>n;
     int count=0;
     for(int i=2; i<=n; i++){
if(n%i==0){
    count++;
}
     }
     if(count>1){
        cout<<"composite"<<endl;
     }
     else{
        cout<<"Prime"<<endl;
     }

    }
