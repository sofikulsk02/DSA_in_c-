#include<bits/stdc++.h>
using namespace std;
void bfs(int node,unordered_map<int,vector<int>>&graph,vector<int>&vis){
    vis[node]=1;
    queue<int>q;
    q.push(node);
    while(!q.empty()){
        int f=q.front();
        q.pop();
        cout<<f<<" ";
        for(auto ele:graph[f]){
            if(vis[ele]!=1){
                vis[ele]=1;
                q.push(ele);
            }
        }
    }
}
int main(){
    vector<vector<int>>edges={{1,2},{2,3},{3,4},{4,2},{1,4}};
    unordered_map<int,vector<int>>graph;
    int n=edges.size();
    for(int i=0;i<n;i++){
        int a=edges[i][0];
        int b=edges[i][1];
        graph[a].push_back(b);
        graph[b].push_back(a);
    } 
    vector<int>vis(n+1,0);
    bfs(1,graph,vis);
} 