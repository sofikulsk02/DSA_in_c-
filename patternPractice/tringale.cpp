// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number n: ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++ ){
            cout<<"*";
        }
        cout<<endl;
    }
}