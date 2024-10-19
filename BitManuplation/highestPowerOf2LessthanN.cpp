#include<bits/stdc++.h>
using namespace std;
int highestPow2(int x){
    int temp=0;
        while(x!=0){
            temp=x;
            x=(x&(x-1));
        }
        return temp;
}
int main(){
     cout<<highestPow2(121);
}