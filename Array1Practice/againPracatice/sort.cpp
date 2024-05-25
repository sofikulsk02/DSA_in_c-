// #include<iostream>
// #include<vector>
// using namespace std;
// void reversePart(int i, int j,vector<int> &v){
//     while(i<=j){
//         int temp=v[j];
//         v[j]=v[i];
//         v[i]=temp;
//         i++;
//         j--;
//     }
// }
// void display(vector<int>&v,int n){
//     for(int i=0; i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int n;
//     cout<<"Enter the array size:";
//     cin>>n;
//     vector<int>v;
//     cout<<"Enter the array elements:";
//     for(int i=0; i<n; i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     display(v,v.size());
//     reversePart(1,4,v);
//     display(v,v.size());
// }

#include<iostream>
#include<vector>
using namespace std;
void reversePart(vector<int>&v){
    int n=v.size();
   for(int i=0; i<n-1; i++){
    for(int j=0; j<n-i-1; j++){
        if(v[j+1]<v[j]) {
            int temp=v[j];
            v[j]=v[j+1];
            v[j+1]=temp;
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
    cout<<"Enter the array size:";
    cin>>n;
    vector<int>v;
    cout<<"Enter the array elements :";
    for(int i=0; i<n; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);
    reversePart(v);
    display(v);

}