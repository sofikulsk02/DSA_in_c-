#include<iostream>
using namespace std;
void gun(){
    cout<<"Hello cw"<<endl;
    return;
}
void fun(){
    cout<<"This is fun"<<endl;
    gun();
    return ;
}
int main(){
    fun();
}