#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    ll target;
    cin>>n>>target;
    vector<ll>v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    int l=0,r=0;
    ll sum=0;
    int ans=0;
    while(r<n) {
        sum+=v[r];
        if(sum <= target) {  // decision making
            ans = max(ans,r-l+1);
        } else {     // contribution delete
            sum -= v[l];
            l++;
        }
        r++;
    }
    cout<<ans<<endl;
    return 0;
}
