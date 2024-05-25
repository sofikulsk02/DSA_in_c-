#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string:";
    getline(cin,str);
    int count=0;
    int i=0;
    bool flag=false;
    while(str[i]!='\0'){
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
            flag=true;
        }
        i++;
    }
    if(flag==true){
        cout<<"There are "<<count<<" vowels";
}
else{
    cout<<"There is no voewl";
}
    }