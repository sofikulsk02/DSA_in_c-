#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the marks of the students:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int count=0;
    bool flag=false;
    for(int j=0; j<n; j++){
        if(arr[j]>35){
            flag=true;
            count++;
        }
    }
   if(flag=true) cout<<"There are "<<" "<<count<<" students who got more than 35";
   else{
    cout<<"all the students are fail";
   }
}