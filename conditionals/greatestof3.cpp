#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a: "<<endl;
    cin>>a;
    cout<<"Enter b: "<<endl;
    cin>>b;
    cout<<"Enter c: "<<endl;
    cin>>c;

    if(a>b && a>c){
        cout<<a<<"is larges";
    }
    else if(b>a && b>c){
        cout<<b<<"is the greatest";
    }
    else{
        cout<<c<<"is the gretest";
    }
}

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter a:";
//     cin>>a;
//     int b;
//     cout<<"Enter b:";
//     cin>>b;
//     int c;
//     cout<<"Enter c:";
//     cin>>c;
//     if(a>b){
//         if(a>c){
//             cout<<"max is: "<<a;
//         }
//         else{
//             cout<<"max is "<<c;
//         }
//     }
//     else if(b>a){
//         if(b>c){
//             cout<<"max is :"<<b;
//         }
//         else{
//             cout<<"max is "<<c;
//         }
//     }
//     else{
//         cout<<"max is : "<<c;
//     }

// }