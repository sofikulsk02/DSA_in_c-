#include<bits/stdc++.h>
using namespace std;
int ans;
bool canGo(vector<vector<int>>&grid,int n,int i,int j){
   return i>=0 and j>=0 and i<n and j<n and grid[i][j]==0;
}
void f(vector<vector<int>>&grid,int n,int i,int j){
    if(i==n-1 && j==n-1){
        ans+=1;
        return;
    }
    grid[i][j]=2;
    //left
    if(canGo(grid,n,i,j-1)){
        f(grid,n,i,j-1);
    }
    //up
    if(canGo(grid,n,i-1,j)){
        f(grid,n,i-1,j);
    }
    //right
    if(canGo(grid,n,i,j+1)){
        f(grid,n,i,j+1);
    }
    //down
    if(canGo(grid,n,i+1,j)){
        f(grid,n,i+1,j);
    }
    grid[i][j]=0;
}
int ratInAMaze(vector<vector<int>>&grid,int n){
     ans=0;
     f(grid,n,0,0);
     return ans;
}
int main(){
    vector<vector<int>>grid={
        {0,0,1,0,0,1,0},
        {1,0,1,1,0,0,0},
        {0,0,0,0,1,0,1},
        {1,0,1,0,0,0,0},
        {1,0,1,1,0,1,0},
        {1,0,0,0,0,1,0},
        {1,1,1,1,0,0,0},
    };
    cout<<ratInAMaze(grid,7);
    return 0;
}