#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter the target element: ";
    cin>>x;
    int n;
    cout<<"Enter the array size:";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the array element:";
    for(int i=0; i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    for(int i=0; i<n-3;i++){
        for(int j=i+1;j<n-2; j++){
            for(int k=j+1; j<n-1; k++){
                if((v[i]+v[j]+v[k])==x){
                    cout<<"("<<i<<","<<j<<","<<k<<")";
                }
            }
        }
    }

}