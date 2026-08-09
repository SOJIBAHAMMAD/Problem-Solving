#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,q;
    cin>>n>>q;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++) {
        cin>>v[i];
    }

    vector<int>d(n+2),prefix(n+2);
    while(q--) {
        int l,r,x;
        cin>>l>>r>>x;
        d[l]+=x;
        d[r+1]-=x;
    }
    for(int i=1;i<=n;i++) {
        prefix[i]= prefix[i-1]+d[i];
    }

    for(int i=1;i<=n;i++) {
        cout<<v[i]+prefix[i]<<" ";
    }
    cout<<endl;
    return 0;
}
