#include<iostream>
#include<vector>
using namespace std;
void sort01m1(vector<int>&v){
    int noz=0;
    int noo=0;
    for(int i=0; i<v.size();i++){
        if(v[i]==0) noz++;
        else noo++;
    }
    for(int i=0; i<v.size(); i++){
        if(i<noz) v[i]=0;
        else v[i]=1;
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
    v.push_back(0);     
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    display(v);
    sort01m1(v);
    display(v);
}
//this was another methode of solving this problem
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     int noz=0;
//     int noo=0;
//     for(int i=0; i<v.size();i++){
//        if(v[i]==0) noz++;
//        else if(v[i]==0) noo++;
//     }
//    for(int i=0; i<v.size(); i++){
//     if(i<noz) v[i]=0;
//     else v[i]=1;
//    }
  
// for(int i =0; i<v.size();i++){
//    cout<<v[i]<<" ";
// }
// cout<<endl;

// }