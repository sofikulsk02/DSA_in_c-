#include<iostream>
using namespace std;
// void swap(int* x,int* y){
//     int temp= *x;
//     *x=*y;
//     *y=temp;
//     return;
// }
void swap(int *p1,int *p2){
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}
int main(){
    // int a=8,b=6;
    // swap(&a,&b);
    // cout<<a  <<" "<<b;

    int a,b;
    cin>>a>>b;
    cout<<a<<b<<endl;
    swap(&a,&b);
    cout<<a<<b;
    
}