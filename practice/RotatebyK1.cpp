#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<int>&v,int i, int j){
    while(i<=j){
        int temp=v[j];
        v[j]=v[i];
        v[i]=temp;
        j--;
        i++;
    }
}
void display(vector<int>&v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
      vector<int>v;
      int n =v.size();
      cout<<"Elements:";
      for(int i=0;i<n; i++){
        int q;
        cin>>q;
        v.push_back(q);
      }
      int k;
      cout<<"K:";
      cin>>k;
   rotate(v,0,n-1-k);
   display(v);
   rotate(v,n-k,n-1);
   display(v);
   rotate(v,0,n-1);
   display(v);
}