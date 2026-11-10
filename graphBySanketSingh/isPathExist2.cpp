#include<iostream>
#include<list>
#include<vector>
using namespace std;
vector<list<int>>graph;
vector<int>vis;
void add_edge(int src,int des,bool bi_dir=true){
    graph[src].push_back(des);
    if(bi_dir){
        graph[des].push_back(src);
    }
}
void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"->";
        for(auto ele:graph[i]){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}
bool dfs(int curr,int des){
     if(curr==des) return true;
     vis[curr]=1;
     for(auto ele:graph[curr]){
       if(!vis[ele]){
        bool result=dfs(ele,des);
        if(result) return true;
       }
     }
     return false;
}
bool anyPath(int src,int des){
    return dfs(src,des);
}
int main(){
    int v,e;
    cin>>v>>e;
    graph.resize(v,list<int>());
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edge(s,d);
    }
    int n=graph.size();
    vis.resize(n,0);
    int x,y;
    cin>>x>>y;
    cout<<anyPath(x,y);
}