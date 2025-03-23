#include<bits/stdc++.h>
using namespace std;
int main(){
    string str[8]={"b","a","a","s","d","c","a","s"};
    int count=0;
    for(int i=0;i<8;i++){
             if(str[i]=="a"){
                for(int j=i+1;j<8;j++){
                    if(str[j]=="s") count++;
                }
             }
    }
    cout<<count<<endl;
}