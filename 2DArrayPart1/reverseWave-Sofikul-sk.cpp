// #include<iostream>
// using namespace std;
// int main(){
//     int m;
//     cout<<"Enter the row no:";
//     cin>>m;
//     int n;
//     cout<<"Enter the row no:";
//     cin>>n;
//     int arr[m][n];
//     cout<<"Enter the array elements:";
//     for(int i=0; i<m; i++){
//         for(int j=0; j<n; j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<endl;
// for(int i=m-1; i>=0; i--){
//     if(i%2==0){
//         for(int j=0; j<n; j++){
//             cout<<arr[i][j]<<" ";
//         }
//     }
//     else{
//         for(int j=n-1; j>=0; j--){
//             cout<<arr[i][j]<<" ";
//         }
//     }
   
// }

// }

#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int res[m][n];
    cout<<"Enter the array elements:";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>res[i][j];
        }
    }
    for(int i=m-1; i>=0; i--){
        if(i%2==0){
            for(int k=0; k<n; k++){
                cout<<res[i][k]<<" ";
            }
        }
        else{
            for(int j=n-1; j>=0; j--){
                cout<<res[i][j]<<" ";
            }
        }
    }

}
