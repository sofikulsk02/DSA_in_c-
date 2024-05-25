// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the array size: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the array element :";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int max=INT16_MIN;
//     int min=INT16_MAX;
//     for(int i=0; i<n; i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//         if(min>arr[i]){
//             min=arr[i];
//         }
//     }
//      cout<<"The maximum element in this array is "<<max<<endl<<"And the minimum element in this array is "<<min;
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
    int min=INT16_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]>max) max=arr[i];
        if(arr[i]<min)  min=arr[i];
    }

    cout<<"The maximum : "<<max<<" the minimum : "<<min;
}
