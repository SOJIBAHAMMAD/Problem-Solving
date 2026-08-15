#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long t;
    cin>>t;
    while(t--) {
        long long n,q;
        cin>>n>>q;
        vector<long long>v(n+1);
        for(long long i=1;i<=n;i++) {
            cin>>v[i];
        }

        vector<long long>pref(n+1,0);
        for(long long i=1;i<=n;i++) {
            pref[i]=pref[i-1]+v[i];
        }

        while(q--) {
            long long l,r,k;
            cin>>l>>r>>k;
            long long sum=pref[n];
            sum -= (pref[r]-pref[l-1]);
            sum += (r-l+1)*k;

            if(sum%2==1) {
                cout<<"YES"<<endl;
            } else {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}