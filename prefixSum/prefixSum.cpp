#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,4,5,3,2,7,6};
    int sum[7];
    sum[0]=arr[0];
    for(int i=1; i<7; i++){
       sum[i]=sum[i-1]+arr[i];
    }
}