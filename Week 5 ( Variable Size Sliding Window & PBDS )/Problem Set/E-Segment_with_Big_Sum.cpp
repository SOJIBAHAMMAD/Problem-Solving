#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    ll s;
    cin>>n>>s;
    vector<ll>v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    ll l=0,r=0;
    ll ans=INT_MAX,sum=0;
    while(r<n) {
        sum += v[r];
        while(sum >= s) {
            ans = min(ans,r-l+1);
            sum -= v[l];
            l++;
        }
        r++;
    }
    if(ans==INT_MAX) ans=-1;
    cout<<ans<<endl;
    return 0;
}