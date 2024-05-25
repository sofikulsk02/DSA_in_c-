#include<iostream>
using namespace std;
void swap(int a ,int b){
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"The swaped number is "<<a<<"and"<<b;
}
int main(){
    swap(3,9);
}