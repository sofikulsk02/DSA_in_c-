#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v,int n){
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void change(vector<int> &v,int n){
    int i=0; int j=v.size()-1;
   while(i<=j){
    int temp=v[j];
    v[j]=v[i];
    v[i]=temp;
    i++;
    j--;
   }
    
}
int main(){
    int n;
    cout<<"Enter the array size:";
    cin>>n;
    vector<int>v;
    cout<<"Enter the array elements:";
    for(int i=0; i<n; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
display(v,v.size());
change(v,v.size());
display(v,v.size());
}