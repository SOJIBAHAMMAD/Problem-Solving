#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--) {
        int n,m=3;  // 3 man
        cin>>n;
        map<string,vector<int>>mp;
        for(int i=1;i<=m;i++) {
            for(int j=1;j<=n;j++) {
                string s;
                cin>>s;
                mp[s].push_back(i);
            }
        }
        vector<int>ans(m+1);
        for(auto x : mp) {
            vector<int>v=x.second; // In x.second we have vector
            if(v.size()==1) {
                ans[v[0]]+=3;
            } else if(v.size()==2) {
                ans[v[0]]+=1;
                ans[v[1]]+=1;
            }
        }
        for(int i=1;i<=m;i++) {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}