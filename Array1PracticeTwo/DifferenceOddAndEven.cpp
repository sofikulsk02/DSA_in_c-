// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the array size:";
//     cin>>n;
//     int arr[n];
//     int sum=0;
//     cout<<"Enter the array elements:";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     for(int i=0; i<n; i++){
//         if(arr[i]%2==0) sum+=arr[i];
//         else sum-=arr[i];
//     }
//     cout<<"The difference between odd and even is"<<sum;
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the array size:";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            sum+=arr[i];
        }
        else{
            sum-=arr[i];
        }
    }
    cout<<"the difference between the odd and the even is "<<sum;
}
