#include<iostream>
using namespace std;
int main(){
    class Calculator{
        public:
        int a;
        int b;
        void add(){
            cout<<(a+b)<<endl;
        }
        void sub(){
            cout<<(a-b)<<endl;
        }
    };
     Calculator calci;
     calci.a=10;
     calci.b=20;
     calci.add();
     calci.sub();
    
}