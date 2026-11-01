#include<bits/stdc++.h>
using namespace std;

void printGraph(vector<vector<int>>adjacencyMatrix){
    int n=adjacencyMatrix.size();
    for(int i=1;i<n;i++){
        cout<<"Node: "<<i<<" :";
        for(int j=1;j<n;j++){
            if(adjacencyMatrix[i][j]==1){
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    vector<vector<int>>edges={{1,2},{2,3},{3,4},{4,2},{1,3}};
    int n=edges.size();
    vector<vector<int>>adjacencyMatrix(5,vector<int>(5,0));
    for(int i=0;i<n;i++){
        int a=edges[i][0];
        int b=edges[i][1];
        adjacencyMatrix[a][b]=1;
        adjacencyMatrix[b][a]=1;
    }
    printGraph(adjacencyMatrix);
}