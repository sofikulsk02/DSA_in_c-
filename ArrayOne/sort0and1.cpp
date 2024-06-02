#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&v){
    int noz=0;
    int noo=0;
    for(int i=0; i<v.size(); i++){
        if(v[i]==0) noz++;
        else noo++;
    }
    for(int i=0; i<v.size(); i++){
        if(i<noz) v[i]=0;
        else v[i]=1;
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
       cin>>n;
       vector<int>v;
       for(int i=0; i<n; i++){
        int q;
        cin>>q;
        v.push_back(q);
       }
       display(v);
       sort(v);
       display(v);
}