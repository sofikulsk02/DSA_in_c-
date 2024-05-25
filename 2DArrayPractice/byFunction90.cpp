#include<iostream>
#include<vector>
using namespace std;
void transpose(vector<vector<int>>&arr,int n){
for(int i=0; i<n; i++){
   for(int j=i+1; j<n; j++ ){
    int temp=arr[i][j];
    arr[i][j]=arr[j][i];
    arr[j][i]=temp;
   }
}
}
void display(vector<vector<int>>&arr,int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the size of the squre matrix:";
    cin>>n;
    vector<vector<int>>v[n][n];
    for(int i=0 ; i<n; i++){
        for(int j=0; j<n; j++){
            int q;
            cin>>q;
            v.push_back(q);
        }
    }
}