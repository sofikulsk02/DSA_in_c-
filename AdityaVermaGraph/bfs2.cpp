#include<bits/stdc++.h>
using namespace std;
void bfs(int src,unordered_map<int,vector<int>>&graph,int n){
        vector<int>vis(n+1,0);
        queue<int>q;
        vis[src]=1;
        q.push(src);
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
    vector<vector<int>>edges={{1,2},{1,4},{1,5},{2,3},{3,6},{6,7}};
    int n=edges.size();
    unordered_map<int,vector<int>>graph;
    for(int i=0;i<n;i++){
         int a=edges[i][0];
         int b=edges[i][1];
         graph[a].push_back(b);
         graph[b].push_back(a);
    }
    bfs(1,graph,n);
}