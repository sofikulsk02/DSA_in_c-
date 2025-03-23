#include<bits/stdc++.h>
using namespace std;
int main(){
    string str[8]={"b","a","a","s","d","c","a","s"};
    int count=0;
    int countOf_s=0;
    for(int i=8-1;i>=0;i--){
           if(str[i]=="s") countOf_s++;
           if(str[i]=="a") count+=countOf_s;
    }
    cout<<count<<endl;
}