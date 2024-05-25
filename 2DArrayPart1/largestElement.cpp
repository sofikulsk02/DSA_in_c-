#include<iostream>
using namespace std;
int main(){
    int arr[2][3]={12,13,14,21,22,45};
    int max=INT16_MIN;
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }
        }
    }
    cout<<"The largest element is :"<<max;
}