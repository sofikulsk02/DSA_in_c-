#include<bits/stdc++.h>
using namespace std;

void bfsTraversal(int node,unordered_map<int,vector<int>> &graph,int n){
    vector<int>vis(n+1,0);
    queue<int>q;
    q.push(node);
    vis[node]=1;
    while(!q.empty()){
        int ele=q.front();
        q.pop();
        cout<<ele<< " ";
        for(auto x: graph[ele]){
            if(vis[x]!=1){
                vis[x]=1;
                q.push(x);
            }
        }
    }
}
int main(){
    vector<vector<int>>edges={{0,1},{0,2},{0,6},{1,4},{2,3}};
    int n=edges.size();
    unordered_map<int,vector<int>>graph;
    for(int i=0;i<n;i++){
        int a=edges[i][0];
        int b=edges[i][1];
        graph[a].push_back(b);
      
    }
    bfsTraversal(0,graph,7);
}