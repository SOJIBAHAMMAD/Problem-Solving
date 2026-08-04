#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin>>n>>m;
    multiset<int>tp;  // tp means ticket price
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        tp.insert(x);
    }
    for(int i=0;i<m;i++) {
        int y;
        cin>>y;
        auto it = tp.upper_bound(y);
        if(it == tp.begin()) {
            cout<<-1<<endl;
        } else {
            --it;
            cout<<*it<<endl;
            tp.erase(it);
        }
    }

    return 0;
}