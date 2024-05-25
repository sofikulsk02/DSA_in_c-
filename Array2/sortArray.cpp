#include<iostream>
#include<vector>
using namespace std;
void sorted(vector<int>&v,int n){
    for(int i=0; i<n-1;i++){
        for(int j=0; j<n-i-1; j++){
            if(v[j+1]<v[j]){
                int temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
            }
        }
    }
}

void displaying(vector<int>&v,int n){
    for(int i=0; i<n; i++){
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
    displaying(v,v.size());
    sorted(v,v.size());
    displaying(v,v.size());
    
}