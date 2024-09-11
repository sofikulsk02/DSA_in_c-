#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    int count=0;
    int maxi=0;
    for(int i=0; i<n;i++){
        if(s[i]==s[i+1]){
            count++;
        }
        else{
            count=0;
        }
        maxi=max(maxi,count);
    }
    cout<<maxi+1<<endl;
}