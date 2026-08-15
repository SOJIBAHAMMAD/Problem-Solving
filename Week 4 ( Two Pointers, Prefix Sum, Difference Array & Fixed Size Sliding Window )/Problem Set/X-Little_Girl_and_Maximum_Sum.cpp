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

    vector<int>d(n+1);
    for(int i=0;i<q;i++) {  // test
        int l,r;
        cin>>l>>r;
        l--,r--;   // 0 based indexing
        d[l]++;
        d[r+1]--;
    }


    // prefix sum 
    for(int i=1;i<=n;i++) {
        d[i]=d[i-1]+d[i];
    }

    sort(v.rbegin(),v.rend());
    sort(d.rbegin(),d.rend());
    long long ans=0;
    for(int i=0;i<n;i++) {
        ans+= (1ll*v[i]*d[i]);
    }
    cout<<ans<<endl;
    return 0;
}