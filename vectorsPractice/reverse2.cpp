#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>&v){
    int i=0;
    int j=v.size()-1;
    while(i<=j){
        int temp=v[j];
        v[j]=v[i];
        v[i]=temp;
        i++;
        j--;
    }
}
void display(vector<int>&v){
    for(int i=0; i<v.size();i++){
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
    reverse(v);
    display(v);
}