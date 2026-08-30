#include<iostream>
using namespace std;
int ways=0;
void solve(int i,int j,int m,int n,string output){
    if(i==m-1 && j==n-1){
        ways++;
        cout<<output<<endl;
    }
    if(i>=m || j>=n) return;
    //donw chalo
    solve(i+1,j,m,n,output+"D");
    //right chalo
    solve(i,j+1,m,n,output+"R");
}
int main(){
    solve(0,0,3,3,"");
    cout<<ways;
    return 0;
}