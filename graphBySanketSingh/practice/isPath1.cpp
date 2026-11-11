#include<bits/stdc++.h>
using namespace std;
vector<list<int>>graph;
vector<int>vis;
void add_edge(int src,int des,bool bi_dir=true){
         graph[src].push_back(des);
         if(bi_dir) graph[des].push_back(src);
}
bool dfs(int curr,int des){
    if(curr==des) return true;
    vis[curr]=1;
    for(auto ele:graph[curr]){
        if(vis[ele]!=1){
            bool res=dfs(ele,des);
            if(res) return true;
        }
    }
    return false;
}
bool isPath(int curr,int des){
    return dfs(curr,des);
}
void displaY(){
    int n=graph.size();
    for(int i=0;i<n;i++){
        cout<<i<<"->";
        for(auto ele:graph[i]){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int v,e;
    cin>>v>>e;
    graph.resize(v,list<int>());
    vis.clear();
    vis.resize(v,0);
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edge(s,d);
    }
    int x,y;
    cin>>x>>y;
    cout<<isPath(x,y);
}