#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int>pq;
    pq.push(10);
    pq.push(120);
    pq.push(130);
    pq.push(75);
    pq.push(377);
    pq.push(33);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top();
}