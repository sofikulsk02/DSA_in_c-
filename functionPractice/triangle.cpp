#include<iostream>
using namespace std;
void triangle(int x){
    for(int i=1; i<=x;i++){
        for(int j=1; j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
 int main(){
    int n;
    cout<<"Enter the number n: ";
    cin>>n;
    triangle(n);
    triangle(3);
    triangle(5);

 }