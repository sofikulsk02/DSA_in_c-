#include<bits/stdc++.h>
using namespace std;
vector<int>st;
void buildTreeMax(int arr[],int i, int lo,int hi){
    if(lo==hi){
        st[i]=arr[lo];
        return;
    }
    int mid=lo+(hi-lo)/2;
    buildTreeMax(arr,2*i+1,lo,mid);
    buildTreeMax(arr,2*i+2,mid+1,hi);
    st[i]=max(st[2*i+1],st[2*i+2]);
}
void buildTreeSum(int arr[],int i,int lo,int hi){
    if(lo==hi){
        st[i]=arr[lo];
        return;
    }
    int mid=lo+(hi-lo)/2;
    buildTreeSum(arr,2*i+1,lo,mid);
    buildTreeSum(arr,2*i+2,mid+1,hi);
    st[i]=st[2*i+1]+st[2*i+2];
}
int getMax(int i,int lo,int hi,int &l,int &r){
    if(lo>r || l>hi){
        return INT16_MIN;
    }
    if(lo>=l && r>=hi){
        return st[i];
    }
    int mid=lo+(hi-lo)/2;
    int leftMax=getMax(2*i+1,lo,mid,l,r);
    int rightMax=getMax(2*i+2,mid+1,hi,l,r);
    return max(leftMax,rightMax);
}
int getSum(int i,int lo,int hi,int &l,int &r){
     if(lo>r || l>hi){
        return 0;
    }
    if(lo>=l && hi<=r){
        return st[i];
    }
    int mid=lo+(hi-lo)/2;
    int leftSum=getSum(2*i+1,lo,mid,l,r);
    int rightSum=getSum(2*i+2,mid+1,hi,l,r);
    return leftSum+rightSum;
}
int main(){
int arr[]={1,4,2,8,6,4,9,3};
     int n=sizeof(arr)/4;
     st.resize(4*n);
    //  buildTreeMax(arr,0,0,n-1);
     buildTreeSum(arr,0,0,n-1);
     int q;
     cout<<"Enter the no of query: "<<endl;
     cin>>q;
     while(q--){
        int l,r;
        cout<<"Enter the range :";
        cin>>l>>r;
        cout<<getSum(0,0,n-1,l,r)<<endl;
     }
}