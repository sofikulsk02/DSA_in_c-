#include<iostream>
#include<vector>
using namespace std;
void sorted(vector<int>&v){
    for(int i=0 ; i<v.size()-1;i++){
        for(int j=0; j<v.size()-i-1; j++){
                   if(v[j+1]<v[j]){
                        int temp=v[j+1];
                        v[j+1]=v[j];
                        v[j]=temp;
                   }
        }
    }
}
void display(vector<int>&v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
int n;
cout<<"Enter the size of the array:";
cin>>n;
vector<int>v;
cout<<"Enter the array elements(0,1,2):";
for(int i=0; i<n; i++){
    int q;
    cin>>q;
    v.push_back(q);
}
display(v);
sorted(v);
display(v);
}