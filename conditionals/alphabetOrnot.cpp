// #include<iostream>
// using namespace std;
// int main(){
//     int number;
//     cout<<"Enter the number:";
//     cin>>number;
//     if(number%5==0){
//         if(number%3==0){
//             cout<<"the number is divisible by 5 and 3 both";
//         }
//         else{
//             cout<<"The number is divisible by 5 but not 3";
//         }
//     }
//     else{
//         cout<<"not matching condition";
//     }
    
    
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    if(n%3==0){
        if(n%5==0){
            cout<<"The number is divisible by both 5 and 3";
        }
        else{
            cout<<"the number is divisible by 3 only";
        }
    }
    else if(n%5==0){
        if(n%3==0){
            cout<<"The number is divisible by both 5 and 3";
        }
        else{
            cout<<"the number is divisible by 5 only";
        }
    }
    else{
        cout<<"The number is not  divisible by either 5 or 3";
    }
}