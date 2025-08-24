#include<bits/stdc++.h>
using namespace std;
vector<int> adj[10005];
vector<int>bfs_array;
vector<int>vis;
void bfs(int node){
    vis[node]=1;
    queue<int>q;
    q.push(node);
    while(!q.empty()){
        int e=q.front();
        q.pop();
        bfs_array.push_back(e);
        for(auto ele:adj[e]){
            if(!vis[ele]){
                vis[ele]=1;
                q.push(ele);
            }
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    vis.resize(n+1,0);
    bfs_array.clear();
    //addjecency list
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
    for(int i=0;i<bfs_array.size();i++){
        cout<<bfs_array[i]<<" ";
    }
}