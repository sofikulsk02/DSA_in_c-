#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adj(n+1);
    while(m--){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(adj[i][j]!=0){
                  cout<<adj[i][j];
                }
            }
    }
}