// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of the array:";
//     cin>>n;
//     int max=INT16_MIN;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int smax=INT16_MIN;
//     for(int i=0; i<n; i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//     }
//     for(int i=0; i<n; i++){
//         if(smax<arr[i] && arr[i]!=max){
//             smax=arr[i];
//         }
         
//     }
//     cout<<"The second largest element in the array is "<<smax;
   
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the array size:";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max=INT16_MIN;
    int smax=INT16_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>max) max=arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]>smax && arr[i]!=max){
            smax=arr[i];
        }
    }
    cout<<"The 2nd largest element is :"<<smax;
}