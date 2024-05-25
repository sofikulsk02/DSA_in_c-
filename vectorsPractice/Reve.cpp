#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void reverse(vector<int>&v){
     int i=0;
   int j=v.size()-1;
  while(i<=j){
   int temp=v[j];
   v[j]=v[i];
   v[i]=temp;
   i++;
   j--;
  }
}
int main(){
    vector<int>v;
     int n=v.size();
        cin>>n;
       cout<<"Enter the elements :";
       for(int i=0 ;i<n; i++){
              int q;
              cin>>q;
              v.push_back(q);
       }
       display(v);
       reverse(v);
       display(v);

}