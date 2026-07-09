#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    deque<int>dq;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        dq.push_back(x);
    }

    dq.push_front(8);  // TC O(1) but in vector it take O(n);
    dq.pop_front();  // TC O(1) but in vector it take O(n);

    // These are the main diff with vector in deque.
    for(auto val : dq) {
        cout<<val<<" ";
    }
    return 0;
}