#include<iostream>
using namespace std;
int main(){
    int m;
    int n;
    cin>>m>>n;
    cout<<"Array elements:";
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int sumi[m];
       int sum=0;
       int newsum=0;
    for(int i=0;i<m; i++){
        for(int j=0; j<n; j++){
            sum+=arr[i][j];
        }
           newsum=sum-newsum;
         sumi[i]={newsum};
    }
    int max=INT16_MIN;
for(int i=0; i<m; i++){
    cout<<sumi[i]<<" ";
}
}