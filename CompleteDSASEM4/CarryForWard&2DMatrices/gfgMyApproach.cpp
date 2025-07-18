#include<bits/stdc++.h>
using namespace std;
int findEquilibrium(vector<int> &arr) {
        int leftSum=0;
        int rightSum=0;
        for(int i=0;i<arr.size();i++){
            rightSum+=arr[i];
        }
        for(int i=0;i<arr.size();i++){
            rightSum-=arr[i];
            if(rightSum==leftSum) return i;
            leftSum+=arr[i];
        }
        return -1;
    }
int main(){
  vector<int>arr={1,2,0,3};
  cout<<findEquilibrium(arr);
}