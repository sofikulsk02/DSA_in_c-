#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int>pq;
<<<<<<< HEAD
=======
    priority_queue<int>p;
    p.push(10);
    p.push(29);
    cout<<p.top();
>>>>>>> ce51a730929fb87714465ace69c2a109b6ac51d5
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