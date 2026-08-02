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
        multiset<int>ml;
        vector<pair<int,int>>ans;
        for(int i=1;i<=n;i++) {
            ml.insert(i);
        }
        for(int i=0;i<n-1;i++) {
            auto it=ml.end();
            it--;
            int x=*it;
            ml.erase(it);
            it=ml.end();
            it--;
            int y=*it;
            ml.erase(it);
            ml.insert((x+y+1)/2); // 1 for round-up
            ans.push_back({x,y});
        }
        cout<<*ml.begin()<<endl;
        for(auto x : ans) {
            cout<<x.first<<" "<<x.second<<endl;
        }

    }
    return 0;
}