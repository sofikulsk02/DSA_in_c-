#include<iostream>
#include<vector>
using namespace std;

void displayGraph(vector<vector<pair<int,int>>> &adj){
    for(int node = 1; node < adj.size(); node++){
        cout << "Node " << node << ": ";
        for(int i = 0; i < adj[node].size(); i++){
            cout << "(" << adj[node][i].first << ", " << adj[node][i].second << ") ";
        }
        cout << endl;
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<pair<int,int>>>adj(n+1);
    while(m--){
        int u,v,wt;
        cin>>u>>v>>wt;
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }
    displayGraph(adj);
}