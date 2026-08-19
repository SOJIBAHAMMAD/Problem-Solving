#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    ll k;
    cin>>n>>k;
    vector<ll>v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    int l=0,r=0;
    ll sum=0;
    ll count=0;
    while(r<n) {
        sum += v[r];
        if(sum <= k) {
            count += (r-l+1);
        } else {
           while(sum>k && l<=r) {
            sum -= v[l];
            l++;
           }
           if(sum <=k) {
            count += (r-l+1);
           }
        }
        r++;
    }
    cout<<count<<endl;
    return 0;
}