#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v,int size){
    for(int i=0; i<size; i++){
        cout<<v[i]<<" ";
    }
}
void reverse(vector<int>&v,int size){
    int i=0,j=size-1;
    while(i<=j){
        int temp=v[j];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
     vector<int>v;
     cout<<"Enter the array elements: ";
     for(int i=0; i<n; i++){
        int q;
        cin>>q;
        v.push_back(q);
     }
     display(v,n);
     cout<<endl;
     reverse(v,n);
     display(v,n);
}