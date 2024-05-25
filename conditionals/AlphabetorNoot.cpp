#include<iostream>
using namespace std;
int main(){
  char ch;
  cout<<"Enter the character:";
  cin>>ch;
  bool flag=false;
  int arr[52]={65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,82,81,83,84,85,86,87,88,89,90,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122};
  for(int i=0 ; i<26; i++){
    if((int)ch==arr[i]){
        flag=true;
    }
  }
  if(flag==true){
    cout<<"It's an Alphabet";
  }
  else{
    cout<<"not an alphabet maybe some other character";
  }
}
