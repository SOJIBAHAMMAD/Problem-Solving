#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        map<int,set<int>>mp;
        for(int i=1;i<=n;i++) {
            int x;
            cin>>x;
            mp[x].insert(i);
        }
        while(k--) {
            int l,r;
            cin>>l>>r;
            if(mp.find(l)==mp.end() || mp.find(r)==mp.end()) {
                cout<<"NO"<<endl;
            } else {
                int stating_station_leftmost_idx = *mp[l].begin();
                int ending_station_rightmost_idx = *mp[r].rbegin();
                if( stating_station_leftmost_idx < ending_station_rightmost_idx ) {
                    cout<<"YES"<<endl;
                } else {
                    cout<<"NO"<<endl;
                }
            }
        }
    }
    return 0;
}