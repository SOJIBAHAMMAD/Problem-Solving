#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        deque<int>dq;
        for(int i=0;i<n;i++) {
            if(!dq.empty()) {
                if(v[i]<dq.front()) {
                    dq.push_front(v[i]);
                } else {
                    dq.push_back(v[i]);
                }
            } else {
                dq.push_front(v[i]);
            }
        }
        for(auto val : dq) {
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}