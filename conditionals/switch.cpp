#include<iostream>
using namespace std;
int main(){
    int week;
    cout<<"Enter week day number";
    cin>>week;
switch(week){
    case 1:
    cout<<"Monday";
    break;
    case 2:
    cout<<"Tuesday";
    break;
    case 3:
    cout<<"wednesday";
    break;
    case 4:
    cout<<"Thursday";
    case 5:
    cout<<"Friday";
    break;
    case 6:
    cout<<"Saturday";
    break;
    case 7:
    cout<<"Sunday";
    break;
    default:
    cout<<"Invalid number";

}
}