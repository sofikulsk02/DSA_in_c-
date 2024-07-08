#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());//it will depends on the ascii value
    cout<<s;
}