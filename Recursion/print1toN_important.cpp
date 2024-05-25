//this is important concepts recursion ke aaage and recrsion k baad bali duniya 
//this is baad wali duniya 
#include<iostream>
using namespace std;
void print1toN(int n){
   if(n==0) return ;
   print1toN(n-1);
   cout<<n<<endl;
}
void numberPrint(int n){
    if(n==0) return;
    numberPrint(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"Enter the number n:";
    cin>>n;
    print1toN(n);
}