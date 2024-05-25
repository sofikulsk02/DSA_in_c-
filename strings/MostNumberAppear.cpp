#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string:";
    cin>>str;
    int n=str.length();
    int max=0;
    for(int i=0; i<n; i++){
        char ch=str[i];
        int count=1;
        for(int j=i+1; j<n; j++){
             if(str[i]==str[j]){
                count++;
             }
             if(max<count) max=count;
        }
    }
    for(int i=0; i<n; i++){
        char ch=str[i];
        int count=1;
        for(int j=i+1; j<n; j++){
             if(str[i]==str[j]){
                count++;
             }
             if(count==max){
                cout<<ch<<" "<<max<<endl;
             }
        }
    }
    
}