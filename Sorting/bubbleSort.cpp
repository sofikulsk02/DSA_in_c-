#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    n=v.size();
    cout<<"enter the size of the array";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0; i<n ; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    for(int i=0; i<n ;i++){
       for(int j=0; j<n-1-i; j++){
         if(v[j]>v[j+1]){
            int temp =v[j];
            v[j]=v[j+1];
            v[j+1]=temp;
        }
       }
    }
    for(int i=0; i<n ; i++){
        cout<<v[i]<<" ";
    }
}