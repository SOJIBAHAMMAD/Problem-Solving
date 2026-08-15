#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,q;
    cin>>n>>q;
    vector<long long>v(n+1);
    for(int i=1;i<=n;i++) {
        cin>>v[i];
    }

    vector<long long>pref(n);
    // defalt pref[0]=0;
    for(int i=1;i<=n;i++) {
        pref[i]=pref[i-1]+v[i];
    }

    while(q--) {
        int a,b;
        cin>>a>>b;
        cout<<pref[b]-pref[a-1]<<endl;
    }
    return 0;
}