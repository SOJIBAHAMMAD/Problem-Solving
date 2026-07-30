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
        map<int ,int>mp;
        for(int i=1;i<=n;i++) {
            int x;
            cin>>x;
            mp[x]++;
        }
        priority_queue<int>pq;
        for(auto val : mp) {
            pq.push(val.second);  // we need to insert freq of ele. into pq;
        }

        while(!pq.empty()) {
            if(pq.size()<2) {
                break;
            }
            int x,y;
            x=pq.top();
            pq.pop();
            y=pq.top();
            pq.pop();
            x--,y--;
            if(x > 0) {
                pq.push(x);
            }
            if(y > 0) {
                pq.push(y);
            }
        }
        int ans=0;
        while(!pq.empty()) {
            ans+=pq.top();
            pq.pop();
        }
        cout<<ans<<endl;
    }
    return 0;
}