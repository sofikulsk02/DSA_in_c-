#include<bits/stdc++.h>
using namespace std;
void removeChar(string ans,string original,int idx){
    if(idx==original.length()){
        cout<<ans;
        return;
    }
    char ch=original[idx];
    if(ch=='a') removeChar(ans,original,idx+1);
    else removeChar(ans+ch,original,idx+1);
}
int main(){
    string str="Raghav Garg";
    string s="";
    for(int i=0; i<str.size();i++){
        if(str[i]!='a'){
            s+=str[i];
        }
    }
    cout<<s<<endl;
    removeChar("","raghav garg",0);
}