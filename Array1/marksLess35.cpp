#include<iostream>
using namespace std;
int main(){
    int noOfstudents;
    cout<<"Enter number of students:";
    cin>>noOfstudents;
    int arr[noOfstudents];
    cout<<"Enter marks";
    for(int i=0;i<noOfstudents;i++){
cin>>arr[i];
    }
    cout<<"failed roll no's are: ";
    for(int i=0; i<noOfstudents; i++){
        if(arr[i]<35){
            cout<<i<<" ";
        }
    }
    
}
