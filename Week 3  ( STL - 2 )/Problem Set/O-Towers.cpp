#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
    cin>>n;
    ll tower=0;
    vector<ll>v(n);
    for(ll i=0;i<n;i++) {
        cin>>v[i];
    }
    multiset<ll>ml;
    for(ll i=0;i<n;i++) {
        auto it = ml.upper_bound(v[i]);
        if(it == ml.end()) {
            tower++;
            ml.insert(v[i]);
        } else {
            ml.erase(it);
            ml.insert(v[i]);
        }
    }
    cout<<tower<<endl;
    return 0;
}