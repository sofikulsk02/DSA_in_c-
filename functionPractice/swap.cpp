#include<iostream>
using namespace std;
void swap(int* x,int*  y){
    int temp=*y;
    *y=*x;
     *x=temp;
    cout<<*x<<" "<<*y;
}
int main(){
  int a,b;
  cin>>a>>b;
  swap(&a,&b);


}