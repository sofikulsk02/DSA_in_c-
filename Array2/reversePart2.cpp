#include<iostream>
#include<vector>
using namespace std;
void reversePart(int i,int j,vector<int>&v){
    while(i<=j){
        int temp=v[j];
        v[j]=v[i];
        v[i]=temp;
        j--;
        i++;
    }
}
void display(vector<int>&v){
    for(int i=0; i<v.size(); i++){
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
    display(v);
    reversePart(0,v.size()-1,v);
    display(v);
        
}
