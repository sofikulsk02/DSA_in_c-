#include<bits/stdc++.h>
using namespace std;
int main(){
    string str[]={"0123","0023","456","00182","940","2901"};
    int maxi=stoi(str[0]);
    string s="";
    for(int i=1; i<=5;i++){
        int ele=stoi(str[i]);
        if(ele>maxi) {
            maxi=ele;
             s=str[i];
        }
    }
    for(int i=0; i<=5;i++){
        if(s==str[i]){
           cout<<str[i];
        }
    }
}