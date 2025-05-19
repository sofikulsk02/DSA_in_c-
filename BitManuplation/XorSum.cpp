#include<bits/stdc++.h>
using namespace std;
int xorsum(int arr[], int N) {
  long sum = 0;
  for (int i = 0; i < 32; i++) {
    int set = 0; // No. of elements where i'th bit is set
    for (int j = 0; j < N; j++) {
      if ((arr[j] >> i) & 1) {
        set++;
      }
    }
    int unset = N - set;
    long pairs = (long)set * unset * 2; // pairs where i'th bit is set.
    long con = pairs * (1LL << i);
    sum = sum + con;
  }
  return sum;
}
int main(){
    int arr[]={1,4,3,2,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<< xorsum(arr,n);
    return 0;
}