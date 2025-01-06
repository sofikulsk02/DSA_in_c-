#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&nums,int s,int m,int e){
            vector<int>temp(e-s+1);
            int p1=s;
            int p2=m;
            int p3=0;
            while(p1<m && p2<e){
                if(nums[p1]<nums[p2]) {
                    temp[p3]=nums[p1];
                    p3++;
                    p1++;
                }
                else{
                    temp[p3]=nums[p2];
                    p3++;
                    p2++;
                }
            }
            while(p1<m){
                   temp[p3]=nums[p1];
                   p3++;
                   p1++;
            }
            while(p2<e){
                   temp[p3]=nums[p2];
                   p3++;
                   p2++;
            }
            int j=0;
            for(int i=s;i<e;i++){
                 nums[i]=temp[j];
                 j++;
            }
}
void mergeSort(vector<int>&nums,int s,int e){
    int m=(e+s)/2;
    if(s==e) return;
    mergeSort(nums,s,m);
    mergeSort(nums,m+1,s);
    merge(nums,s,m,e);
}
int main(){

}