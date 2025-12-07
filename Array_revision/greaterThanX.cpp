#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the array size"<<endl;
    cin>>n;
    vector<int>v;
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    int x;
    cout<<"Enter the number that you want your number to be greater"<<endl;
    cin>>x;
    int count=0;
    for(int i=0; i<n;i++){
        if(v[i]>x){
            count++;
        }
    }
    if(count!=0){
        cout<<"There are "<<count<<" elemnts that are greater than give x"<<endl;
    }
    else{
        cout<<"There are no elements that are greater than the given x"<<endl;
    }
}