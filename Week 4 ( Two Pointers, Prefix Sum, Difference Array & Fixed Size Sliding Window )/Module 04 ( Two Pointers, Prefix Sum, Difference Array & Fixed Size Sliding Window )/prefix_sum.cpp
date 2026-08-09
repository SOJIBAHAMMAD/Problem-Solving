#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,q;
    cin>>n>>q;
    vector<int>v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }

    vector<int>prefix(n);
    prefix[0]=v[0];
    for(int i=1;i<n;i++) {
        prefix[i]=prefix[i-1]+v[i];
    }

    for(auto val : prefix) {
        cout<<val<<" ";
    }
    cout<<endl;
    while(q--) {
        int l,r;
        cin>>l>>r;
        l--,r--;  // 0 based indexing
        cout<<prefix[r]-prefix[l-1]<<endl;
    }
    return 0;
}