#include<bits/stdc++.h>
using namespace std;
int v;
vector<unordered_map<int,int>>graph;
void add_edge(int u,int v,int wt,bool bi_dir=true,vector<unordered_map<int,int>>&graph=graph){
    graph[u][v]=wt;
    if(bi_dir){
        graph[v][u]=wt;
    }
}
void display_graph(vector<unordered_map<int,int>>&graph){
     for(int i=0; i<graph.size();i++){
        for(auto ele:graph[i]){
            cout<<i<<"->"<<ele.first<<" "<<ele.second<<endl;
        }
        cout<<endl;
     }
}
int main(){
 cin>>v;
 graph.resize(v,unordered_map<int,int>());
 int e;
 cin>>e;
 while(e--){
    int u,v,wt;
    cin>>u>>v>>wt;
    add_edge(u,v,wt);
 }
 display_graph(graph);
}