#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  string str;
  getline(cin,str);
  stringstream ss(str);
  string temp;
  while(ss>>temp){
    cout<<temp<<endl;
  }
}