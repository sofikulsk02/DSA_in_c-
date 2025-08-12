#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums1={1,2,3,4,5,9,10};
    vector<int>nums2={2,3,4,4,5,6};
    int n1=nums1.size();
    int n2=nums2.size();
    set<int>st;
    vector<int>ans;
    for(int i=0;i<n1;i++){
        st.insert(nums1[i]);
    }
    for(int i=0;i<n2;i++){
        st.insert(nums2[i]);
    }
    for(auto ele:st){
        ans.push_back(ele);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}