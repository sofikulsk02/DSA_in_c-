#include<iostream>
using namespace std;
int main(){
    int number;
    cin>>number;
    if(number%5==0 && number%3==0){
        cout<<"divisible by both";
    }
    else{
        cout<<"The number is not divisible either 5 or 3";
    }
}