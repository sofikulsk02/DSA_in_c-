#include<iostream>
#include<vector>
using namespace std;
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
    int x;
    cout<<"Enter the number which is the sum of the array elements:";
    cin>>x;
    bool flag=false;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; i<n;j++){
            if((v[i]+v[j])==x){
                flag=true;
                cout<<"The sum of "<<"("<<i<<","<<j<<") is equal to "<<x;
            }
        }
    }
    if(flag==false){
        cout<<"No match:";
    }
    
}