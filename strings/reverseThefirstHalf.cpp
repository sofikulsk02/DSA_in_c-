#include<iostream>
using namespace std;
int main(){
    // string s="naazmoon";
    // for(int i=0; i<4; i++){
    //     string temp=s[i];
    //       s[i]=s[4-i];
    //       s[4-i]=temp;
    // }
    //   cout<<s<<endl;

    string str;
    getline(cin,str);
    for(int i=0; i<str.length()/2;i++){
         char temp=str[(str.length()/2-1)];
        str[(str.length()/2-1)]=str[i];
          str[i]=temp;
    }
    cout<<str;
    
}