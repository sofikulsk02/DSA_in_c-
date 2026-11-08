#include<bits/stdc++.h>
using namespace std;
bool dfs(unordered_map<int,vector<int>>&graph,vector<int>&vis,int curr,int des){
    if(curr==des) return true;
    vis[curr]=1;
    for(auto ele:graph[curr]){
        if(!vis[ele]){
            bool res=dfs(graph,vis,ele,des);
            if(res) return true;
        }
    }
    return false;
}
bool isPath(unordered_map<int,vector<int>>graph,vector<int>vis,int src,int des){
   return dfs(graph,vis,src,des);
}
int main(){
    vector<vector<int>>edges={{1,2},{2,3},{3,4},{4,2},{3,5}};
    unordered_map<int,vector<int>>graph;
    int n=edges.size();
    for(int i=0;i<n;i++){
        int a=edges[i][0];
        int b=edges[i][1];
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    vector<int>vis(6,0);
    cout<<isPath(graph,vis,1,4);
}