#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums={12,345,7,8,90};
    int mx=INT16_MIN;
    for(int i=0;i<nums.size();i++){
           if(mx<nums[i]) mx=nums[i];
    }
    cout<<mx<<endl;
}
