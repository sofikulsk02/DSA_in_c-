#include<iostream>
using namespace std;
int main(){
    int x=4;
    int *p=&x;
    char ch='c';
    char* name=&ch;
    cout<<&x<<endl;
    cout<<&ch<<endl;
    cout<<name<<endl;

}