#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in the array"<<endl;
    cin>>n;
    cout<<"Enter the array elemnts"<<endl;
    int maxElement=INT_MIN;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        maxElement=max(maxElement,q);
    }
    cout<<"The max element is "<<maxElement<<endl;
}