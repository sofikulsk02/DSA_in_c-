#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string:";
    getline(cin,str);
    int count=0;
    bool flag=false;
    char arr[11]={'A','E','I','O','U','a','e','i','o','u'};
    for(int i=0; i<str.length();i++){
        for(int j=0; j<10; j++){
            if(str[i]==arr[j]){
                count++;
                flag=true;
            }
        }
    }
    if(flag==true){
        cout<<"There are "<<count<<" vowels";
    }
    else{
        cout<<"There is no vowel in the given string";
    }
}