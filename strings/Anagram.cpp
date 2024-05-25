//anagram is simply the combination of all charactrers rearangemenet
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s="sofikulsk";
    string t="sksofikul";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}

