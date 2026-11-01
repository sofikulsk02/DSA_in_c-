#include<bits/stdc++.h>
using namespace std;
void printGraph(vector<vector<int>>graph,int n){
    for(int i=1;i<n;i++){
        cout<<i<<" ->";
        for(int j=1;j<n;j++){
            if(graph[i][j]==1){
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    vector<vector<int>>edges={{1,2},{2,3},{3,4},{4,2},{1,3}};
    int n=edges.size();
    vector<vector<int>>graph(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
                int a=edges[i][0];
                int b=edges[i][1];
                graph[a][b]=1;
                graph[b][a]=1;
    }
    printGraph(graph,n);
}