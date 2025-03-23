#include<bits/stdc++.h>
using namespace std;
vector<vector<string>>result;
vector<vector<char>>grid;
bool canPlaceQueen(int row,int col,int n){
    // * check for the column
    for(int i=row-1;i>=0;i--){
        if(grid[i][col]=='Q') return false;
    }
    // * check for the left diagonal
    for(int i=row-1,j=col-1; i>=0 && j>=0; i--,j--){
        if(grid[i][j]=='Q') return false;
    }
    // * check for the right diagonal
    for(int i=row-1,j=col+1;i >=0 && j<n;i--.j++){
        if(grid[i][j]=='Q') return false;
    }
    return true;
}
void helper(int row,int n){
    if(row==n){
        vector<string>temp;
        for(int i=0; i<n;i++){
            string res="";
            for(int j=0;j<n;j++){
                res+=grid[i][j];
            }
            temp.push_back(res);
        }
        result.push_back(temp);
    }
    for(int col=0;col<n;col++){
        if(canPlaceQueen(row,col,n)){
            grid[row][col]='Q';
            helper(row+1,n);
            grid[row][col]='.';
        }
    }
}
int main(){
        grid.clear();
        result.clear();
        int n;
        cin>>n;
        grid.resize(n,vector<char>(n,'.'));
        helper(0,n);
}