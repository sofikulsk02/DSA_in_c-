#include<iostream>
#include<vector>
using namespace std;
void sort01m2(vector<int>&v,int n){
    int i=0; int  j=n-1;
while(i<j){
    if(v[j]==1) j--;
    else if(v[i]==0 ) i++;
    else if(v[i]=1 && v[j]==0){
        int temp=v[j];
        v[j]=v[i];
        v[i]=temp;
        i++;
        j--;
    }
}
}
void display(vector<int>&v){
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    display(v);
    sort01m2(v,v.size());
    display(v);

}

// #include<iostream>
// #include<vector>
// using namespace std;
// void sort01m2(vector<int>&v,int n){
//     int i=0; 
//     int j=n-1;
//     while(i<j){
//         if(v[j]==1) j--;
//         else if(v[i]==0) i++;
//         else if(v[i]==1 && v[j]==0) {
//             int temp=v[j];
//             v[j]=v[i];
//             v[i]=temp;
//             i++;
//             j--;
//         }
//     }
// }
// void display(vector<int>&v){
//     for(int i=0; i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int>v;
//     int n=v.size();
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     display(v);
//     sort01m2(v,v.size());
//     display(v);
// }