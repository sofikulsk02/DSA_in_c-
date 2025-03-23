#include <iostream>
#include <vector>
#include <list>
using namespace std;
using namespace std;
int v;
vector<list<int>>unordered_unweighted_graph;
void add_edge(int src,int dest,bool bi_dir=true,vector<list<int>>&graph=unordered_unweighted_graph){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }      
}
void display_graph(vector<list<int>>&graph){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"->";
        for(auto ele:graph[i]){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}
int main(){
     cin>>v;
     unordered_unweighted_graph.resize(v,list<int>());
     int e;
     cin>>e;
     while(e--){
        int s,d;
        cin>>s>>d;
        add_edge(s,d,false,unordered_unweighted_graph);
     }
     display_graph(unordered_unweighted_graph);
}