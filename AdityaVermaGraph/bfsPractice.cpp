#include<bits/stdc++.h>
using namespace std;

void bfs(int source,unordered_map<int,vector<int>>graph,int n){
     vector<int>visited(n+1,0);
     queue<int>q;
     q.push(source);
     visited[source]=1;
     while(!q.empty()){
         int f=q.front();
         q.pop();
         cout<<f<<" ";
         for(auto ele:graph[f]){
            if(visited[ele]!=1){
                q.push(ele);
                visited[ele]=1;
            }
         }
     }
}
int main(){
    vector<vector<int>>edges={{1,2},{2,3},{3,4},{4,2},{1,3}};
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