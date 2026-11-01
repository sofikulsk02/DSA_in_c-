#include<bits/stdc++.h>
using namespace std;

void printGraph(vector<vector<int>>adjacencyMatrix){
     for(int i=1;i<5;i++){
        cout<<"Node :"<<i<< " is connected to :";
        for(int j=1;j<5;j++){
            if(adjacencyMatrix[i][j]!=0){
                cout<<"("<<j<<","<<adjacencyMatrix[i][j]<<")";
            }
        }
        cout<<endl;
     }
}

int main(){
      vector<pair<int,pair<int,int>>>edges={{1,{2,5}},{2,{3,10}},{3,{4,7}}};
      vector<vector<int>>adjacencyMatrix(5,vector<int>(5,0));
    for(int i=0;i<edges.size();i++){
           int node=edges[i].first;
           int connectedTo=edges[i].second.first;
           int weight=edges[i].second.second;

           adjacencyMatrix[node][connectedTo]=weight;
           adjacencyMatrix[connectedTo][node]=weight;
      }

      printGraph(adjacencyMatrix);
}