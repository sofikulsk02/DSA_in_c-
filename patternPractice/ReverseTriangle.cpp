// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number n: ";
//     cin>>n;
//     for(int i=1; i<=n;i++){
//         for(int j=1;j<=n-i+1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n;i++){
        for(int j=n-i; j>=1; j--){
             cout<<"*";
        }
        cout<<endl;
    }
}