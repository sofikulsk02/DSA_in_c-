#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums={12,45,66,78,11,9,7,200,156};
    int mx1=INT16_MIN;
    int mx2=INT16_MIN;
    for(int x: nums){
        if(x>mx1){
            mx2=mx1;
            mx1=x;
        }
        else if(x>mx2 && x!=mx1){
               mx2=x;
        }
    }
    cout<<mx2<<endl;
}