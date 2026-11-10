#include<iostream>
#include<list>
#include<vector>
using namespace std;
vector<list<int>>graph;
void add_edge(int src,int des,bool bi_dir=true){
    graph[src].push_back(des);
    if(bi_dir){
        graph[des].push_back(src);
    }
}
void display(){
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
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edge(s,d);
    }
    display();
}