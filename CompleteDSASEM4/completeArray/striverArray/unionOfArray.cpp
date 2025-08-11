#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums1={1,2,4,6,8};
    vector<int>nums2={2,3,4,5,8,10,12};
    int n1=nums1.size();
    int n2=nums2.size();
    int i=0,j=0;
    vector<int>unionArray;
    while(i < n1 && j < n2){
          if(nums1[i] <= nums2[j]){
            if(unionArray.size() == 0 || unionArray.back() != nums1[i]){
                unionArray.push_back(nums1[i]);
            }
            i++;
          }
          else{
            if(unionArray.size() == 0 || unionArray.back() != nums2[j]){
                unionArray.push_back(nums2[j]);
            }
            j++;
          }
    }
    while(j < n2){
           if(unionArray.size() == 0 || unionArray.back() != nums2[j]){
                unionArray.push_back(nums2[j]);
            }
            j++;
    }
    while(i < n1){
           if(unionArray.size() == 0 || unionArray.back() != nums1[i]){
                unionArray.push_back(nums1[i]);
            }
            i++;
    }
    for(int i=0;i<unionArray.size();i++){
        cout<<unionArray[i]<<" ";
    }
}