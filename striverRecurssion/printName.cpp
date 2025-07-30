#include<bits/stdc++.h>
using namespace std;
void printName(string s,int n){
     if(n==0) return;
     cout<<s<<endl;
     n--;
     printName(s,n);

}
int main(){
  string s="soma";
  int n;
  cin>>n;
  printName(s,n);
}