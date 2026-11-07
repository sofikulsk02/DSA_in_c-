#include<bits/stdc++.h>
using namespace std;
void printGraph(unordered_map<int,vector<int>>graph,int n){
    for(auto ele:graph){
        cout<<ele.first<<"->";
        for(auto x:ele.second){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<vector<int>>edges={{1,2},{2,3},{3,4},{1,3}};
    int n=edges.size();
    unordered_map<int,vector<int>>graph;
    for(int i=0;i<n;i++){
        int a=edges[i][0];
        int b=edges[i][1];
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    printGraph(graph,n);
}