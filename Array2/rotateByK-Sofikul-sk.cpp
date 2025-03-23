#include<iostream>
#include<vector>
using namespace std;
void reversePart(int i,int j,vector<int>&v){
     while(i<j){
        int temp=v[j];
        v[j]=v[i];
        v[i]=v[j];
        i++;
        j--;
     }
}
void display(vector<int>&v,int n){ 
    for(int i=0; i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the array size:";
    cin>>n;
    vector<int>v;
    cout<<"Enter the array elements:";
    for(int i=0; i<n; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    int k;
    cout<<"Enter the number of steps you want to be rotate the array:";
    cin>>k;
    reversePart(0,n-k-1,v);
    display(v,v.size());
    reversePart(n-k,n-1,v);
    display(v,v.size());
    reversePart(0,n-1,v);
    display(v,v.size());
}

