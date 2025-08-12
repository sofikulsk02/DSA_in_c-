#include<bits/stdc++.h>
using namespace std;
vector<vector<char>>grid;
vector<vector<string>>result;
bool canPlaceQueen(vector<vector<char>>&grid,int row,int col,int n){
    //column check
   for(int i=row-1;i>=0;i--){
    if(grid[i][col]=='Q') return false;
   }
   //check right diagonal
   for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++){
    if(grid[i][j]=='Q') return false;
   }
   //check left diagonal
   for(int i=row-1,j=col-1; i>=0 && j>=0;i--,j--){
    if(grid[i][j]=='Q') return false;
   }
   return true;
}
void f(int row,int n){
    if(row==n){
         vector<string>temp;
        for(int i=0;i<n;i++){
            string res;
            for(int j=0;j<n;j++){
                res+=grid[i][j];
            }
           temp.push_back(res);
        }
        result.push_back(temp);
    }
    for(int col=0;col<n;col++){
        if(canPlaceQueen(grid,row,col,n)){
            grid[row][col]='Q';
            f(row+1,n);
            grid[row][col]='.';
        }
    }
}
vector<vector<string>> solveNQueens(int n) {
        grid.clear();
        grid.resize(n,vector<char>(n,'.'));
        result.clear();
        f(0,n);
        return result;
    }
int main(){
   vector<vector<string>>ans=solveNQueens(4);
   for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cout<<ans[i][j];
    }
  cout<<endl;
   }
}