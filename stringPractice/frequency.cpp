#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){
  string str;
  cout<<"Enter the string:";
  getline(cin,str);
  int n=str.length();
  vector<int> arr(26,0);
  for(int i=0; i<n; i++){
    char ch=str[i];
    int ascii=(int)ch;
      arr[ascii-97]++;
  }
  int mx=0;
  for(int i=0; i<26; i++){
    if(arr[i]>mx) mx=arr[i];
  }
  for(int i=0; i<26; i++){
    if(arr[i]==mx){
        int ascii=i+97;
        char ch=(char)ascii;
        cout<<ch<<" "<<mx<<endl;
    }
    
  }
}