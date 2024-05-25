#include<iostream>
using namespace std;
int main(){
 string name;
    int roll,marks;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"enter your roll and marks: ";
    cin>>roll;
    cin>>marks;
    if(roll>=10 && marks>90){
cout<<"you can join the feed and you're on off the good student of our college"<<endl;
    }
else if(roll<10&&marks<80){
        cout<<"you're not doing well and maybe you are disturbing that too it is good to have that you left the collge "<<endl;
    }
    else{
        cout<<"need not to worry about you can only change that directory and that's it";
    }

    // anything inside the double qoutes that would  be treted as texts
}