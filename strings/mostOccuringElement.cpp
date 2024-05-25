#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
     vector<string>v;
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int n=v.size();
    int count=1; 
    int maxCount=1;
    for(int i=0; i<n;i++){
          if(n==1)return str[0];
        else if (v[i]==v[i+1])
        {
            /* code */
        }
        
    }
}