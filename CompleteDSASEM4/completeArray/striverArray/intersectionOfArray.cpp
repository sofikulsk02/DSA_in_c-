#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums1={2,5,7,13,16};
    vector<int>nums2={3,7,16,21,33};
    int n1=nums1.size();
    int n2=nums2.size();
    vector<int>intersection;
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(nums1[i]==nums2[j]){
              if(intersection.empty() || intersection.back()!=nums1[i]){
                intersection.push_back(nums1[i]);
              }
              i++;
              j++;
        }
        else{
            if(nums1[i]>nums2[j]){
                j++;
            }
            if(nums1[i]<nums2[j]){
                i++;
            }
        }
    }
    for(int i=0;i<intersection.size();i++){
        cout<<intersection[i]<<" ";
    }
}