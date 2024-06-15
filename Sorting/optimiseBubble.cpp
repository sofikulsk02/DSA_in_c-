#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    int n=v.size();
    cout<<"Enter the size of array";
    bool flag=false;
    for(int i=0; i<n; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    for(int i=0; i<n; i++){
        flag=true;
        for(int j=0 ; j<n-1-i; j++){
            swap(v[j],v[j+1]);
            flag=false;
        }
         if(flag==true) {
        break;
    }
    }
   for(int i=0; i<n; i++){
    cout<<v[i]<<" ";
   }
}