#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--) {
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        vector<int>v(m);
        for(int i=0;i<m;i++) {
            cin>>v[i];
        }
        set<int>st;
        for(auto val : v) {
            st.insert(val-1);
        }
        string c;
        cin>>c;
        sort(c.begin(),c.end());
        int idx=0;
        for(auto val : st) {
            s[val]=c[idx];
            idx++;
        }
        cout<<s<<endl;
    }
    return 0;
}