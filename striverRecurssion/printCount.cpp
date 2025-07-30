#include<bits/stdc++.h>
using namespace std;
void printCount(int count){
    if(count==10) return ;
    cout<<count;
    count++;
    printCount(count);
}
int main(){
    int count=0;
    printCount(count);
}