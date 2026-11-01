#include<bits/stdc++.h>
using namespace std;

void printGraph(vector<vector<int>>grpah){
    int n=grpah.size();
    for(int i=1;i<n;i++){
        cout<<"Node "<<i<<" ->";
        for(int j=1;j<n;j++){
            if(grpah[i][j]!=0){
                cout<<"("<<j<<","<<grpah[i][j]<<")"<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
      vector<pair<int,pair<int,int>>>edges={{1,{2,5}},{2,{3,10}},{3,{4,7}},{4,{2,11}},{1,{3,17}}};
      int n=edges.size();
      vector<vector<int>>grpah(n,vector<int>(n,0));
      for(auto ele:edges){
        int a=ele.first;
        int b=ele.second.first;
        grpah[a][b]=ele.second.second;
        grpah[b][a]=ele.second.second;
      }
      printGraph(grpah);
}