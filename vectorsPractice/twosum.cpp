#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the array size:";
    cin>>n;
    int x;
    cout<<"Enter the target:";
    cin>>x;
    vector<int>v;
    cout<<"Enter the array element:";
    for(int i=0; i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    
    for(int j=0;j<n;j++){
        for(int i=j+1;i<n;i++){
            if(v[j]+v[i]==x){
                cout<<"("<<j<<","<<i<<")";
            }
        }
    }
}