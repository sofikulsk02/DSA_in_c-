#include<bits/stdc++.h>
using namespace std;
void fillSeive(vector<bool>&seive){
    int n=seive.size()-1;
    for(int i=2;i<=sqrt(n);i++){
           for(int j=2*i;j<=n;j+=i){
            seive[j]=0;
           }
    }
}
int main(){
    int n;
    cin>>n;
    int count=0;
    vector<bool>seive(n+1,1);
    fillSeive(seive);
    seive[0]=0;
    seive[1]=0;
    for(int i=0;i<n;i++){
        if(seive[i]==1) count++;
        cout<<seive[i]<<" ";
    } 
    cout<<endl<<count<<"\n";
}