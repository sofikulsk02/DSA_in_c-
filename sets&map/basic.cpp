#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.erase(2);
   int target=4;
   if(s.find(target)!=s.end()){
    cout<<"Exists";
   }
   else{
    cout<<"No";
   }
    for(int ele :s){
        cout<<ele<<" ";
    }
   
}