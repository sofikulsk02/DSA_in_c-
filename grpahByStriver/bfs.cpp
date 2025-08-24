#include<bits/stdc++.h>
using namespace std;

vector<int> vis;
vector<int> adj[100005];
vector<int> bfs_result;

void bfsMethod(int start) {
    vis[start] = 1;
    queue<int> q;
    q.push(start);
    
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        bfs_result.push_back(node);
        
        for (auto ele : adj[node]) {
            if (!vis[ele]) {
                vis[ele] = 1;
                q.push(ele);
            }
        }
    }
}

int main() {
    int n, m;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> m;
    
    vis.resize(n + 1, 0);
    bfs_result.clear();
    
    cout << "Enter edges (u v):" << endl;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    cout << "BFS traversal starting from node 1: ";
    bfsMethod(1);
    
    for (int i = 0; i < bfs_result.size(); i++) {
        cout << bfs_result[i] << " ";
    }
    cout << endl;
    
    return 0;
}