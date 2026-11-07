#include<bits/stdc++.h>
using namespace std;
void dfs(int node,unordered_map<int,vector<int>>&graph,vector<int>&vis){
    vis[node]=1;
    cout<<node<<" ";
    for(auto ele:graph[node]){
        if(vis[ele]!=1){
            dfs(ele,graph,vis);
        }
    }
}
int main(){
    vector<vector<int>>edges={{0,1},{0,4},{1,2},{2,3},{2,5},{4,0}};
    int n=edges.size();
    unordered_map<int,vector<int>>graph;
    for(int i=0;i<n;i++){
        int a=edges[i][0];
        int b=edges[i][1];
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    vector<int>vis(n+1,0);
    dfs(0,graph,vis);
}