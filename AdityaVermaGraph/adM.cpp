#include<bits/stdc++.h>
using namespace std;
void printGraph(vector<vector<int>>&graph,int n){
    for(int i=1;i<n;i++){
        cout<<i<<"->";
        for(int j=1;j<n;j++){
            if(graph[i][j]==1){
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
}
void printList(unordered_map<int,vector<int>>&adjList,int n){
    for(auto ele:adjList){
        cout<<ele.first<<"->";
         for(auto x:ele.second){
            cout<<x<<" ";
         }
        cout<<endl;
    }
}
int main(){
    vector<vector<int>>edges={{1,2},{2,3},{3,4},{4,2},{1,3}};
    int n=edges.size();
    vector<vector<int>>graph(n+1,vector<int>(n+1,0));
    unordered_map<int,vector<int>>adjList;
    for(int i=0;i<n;i++){
        int a=edges[i][0];
        int b=edges[i][1];
        graph[a][b]=1;
        graph[b][a]=1;
    }
    for(int i=0;i<n;i++){
        int a=edges[i][0];
        int b=edges[i][1];
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }
    printGraph(graph,n);
    printList(adjList,n);
}