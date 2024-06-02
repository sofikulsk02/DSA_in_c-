#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&v,int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(v[j+1]>v[j]){
                  int temp=v[j+1];
                  v[j+1]=v[j];
                  v[j]=temp;
            }
        }
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
    sort(v,v.size());
    display(v);
}