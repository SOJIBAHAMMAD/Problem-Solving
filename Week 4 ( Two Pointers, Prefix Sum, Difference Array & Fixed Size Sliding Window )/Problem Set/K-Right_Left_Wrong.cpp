#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        vector<ll>v(n+1);
        for(ll i=1;i<=n;i++) {
            cin>>v[i];
        }
        string s;
        cin>>s;
        v[0]=0;
        vector<ll>pref(n+1,0);
        for(int i=1;i<=n;i++) {
            pref[i]=pref[i-1]+v[i];
        }
        ll ans=0;
        ll l=0,r=n-1;
        while(l<r) {
            if(s[l]=='L' && s[r]=='R') {
                ans += pref[r+1]-pref[l];
                l++;
                r--;
            } else if(s[l] != 'L') {
                l++;
            } else if(s[r] != 'R') {
                r--;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}