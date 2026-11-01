#include<bits/stdc++.h>
using namespace std;
void dfs(int src,unordered_map<int,vector<int>>&graph,vector<int>&vis,int n){
        vis[src]=1;
        //oparation
        cout<<src<<" ";
        for(auto ele:graph[src]){
            if(vis[ele]!=1){
                dfs(ele,graph,vis,n);
            }
        }
}
int main(){
    vector<vector<int>>edges={{1,2},{2,3},{3,4},{4,2},{1,3}};
    unordered_map<int,vector<int>>graph;
    int n=edges.size();
    for(int i=0;i<n;i++){
        int a=edges[i][0];
        int b=edges[i][1];
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    vector<int>vis(n+1,0);
    dfs(1,graph,vis,n);
}