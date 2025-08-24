#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> matrix(n+1, vector<int>(n+1, 0));
    for(int i=0;i<n;i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        matrix[u][v]=wt;
        matrix[v][u]=wt;
    }
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            if(matrix[i][j]) cout<<i<<"--"<<j<<"-->"<<matrix[i][j]<<endl;
        }
    }
}