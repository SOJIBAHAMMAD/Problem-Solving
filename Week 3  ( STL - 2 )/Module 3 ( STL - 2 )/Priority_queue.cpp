#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    // // Non-increasing

    // priority_queue<int>pq;
    // pq.push(5);
    // pq.push(2);
    // pq.push(1);
    // pq.push(5);
    // pq.push(3);
    // pq.push(2);

    // cout<<pq.top()<<endl;
    // pq.pop();
    // cout<<pq.top()<<endl;
    // pq.pop();

    // cout<<pq.size()<<endl;
    // cout<<pq.empty()<<endl;


    // while(!pq.empty()) {
    //     cout<<pq.top()<<" ";
    //     pq.pop();
    // }


    // Non-decrieasing

    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(5);
    pq.push(2);
    pq.push(1);
    pq.push(5);
    pq.push(3);
    pq.push(2);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    pq.pop();

    cout<<pq.size()<<endl;
    cout<<pq.empty()<<endl;


    while(!pq.empty()) {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}