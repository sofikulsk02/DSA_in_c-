#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    for(int s=0;s<10;s++){
        for(int e=s;e<10;e++){
            for(int l=s;l<=e;l++){
                cout<<arr[l]<<' ';
            }
            cout<<endl;
        }
    }
}