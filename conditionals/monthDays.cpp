#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter month day number:";
    cin>>x;
switch(x){
    case 1:
    cout<<31;
    break;
    case 2:
    cout<<28;
    break;
    case 3:
    cout<<30;
    break;
    case 4:
    cout<<31;
    case 5:
    cout<<30;
    break;
    case 6:
    cout<<31;
    break;
    case 7:
    cout<<30;
    break;
    default:
    cout<<"Invalid number";

}
}