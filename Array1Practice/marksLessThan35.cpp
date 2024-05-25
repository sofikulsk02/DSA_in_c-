#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"Enter no of students: ";
    cin>>n;
    int count=0;
    bool flag=false;
    int arr[n];
    cout<<"Enter the marks of the students: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]<35){
            count++;
        }
    }
    if(count>0){
        flag=true;
    }
    if(flag==true){
        cout<<"there are "<<count<<" "<<"students who got marks less than 35";
    }
    else{
        cout<<"There are no students who got marks less than 35";
    }
}
