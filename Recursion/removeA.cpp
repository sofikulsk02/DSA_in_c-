#include<bits/stdc++.h>
using namespace std;
string removeA(string ans,string original){
    for(int i=0;i<original.length();i++){
        if(original[i]!='a') ans+=original[i];
    }
    return ans;
}
int main(){
    string str="rajib i am here";
    cout<<removeA("",str);
}