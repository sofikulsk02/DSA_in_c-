#include<bits/stdc++.h>
using namespace std;
void bfs(int node,unordered_map<int,vector<int>>&graph,vector<int>&vis,int n){
    queue<int>q;
    vis[node]=1;
    q.push(node);
    while(!q.empty()){
        int ele=q.front();
        q.pop();
        cout<<ele<<" ";
        for(auto x:graph[ele]){
            if(vis[x]!=1){
                vis[x]=1;
                q.push(x);
            }
        }
    }
}
int main(){
    vector<vector<int>>edges={{1,2},{2,3},{3,4},{4,2}};
    unordered_map<int,vector<int>>graph;
    int n=edges.size();
    for(int i=0;i<n;i++){
         int a=edges[i][0];
         int b=edges[i][1];
         graph[a].push_back(b);
         graph[b].push_back(a);
    }
    vector<int>vis(n+1,0);
    bfs(1,graph,vis,n);
}