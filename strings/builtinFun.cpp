#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str="Raghav garg is at pwIoI";
    // cout<<str.length();
    // cout<<str.size();

    string str="abcd";
    cout<<str<<endl;
    str.push_back('e');
    cout<<str<<endl;
    str.pop_back();
    cout<<str;
    str.push_back('e');
    str.push_back('t');
    cout<<str;
}