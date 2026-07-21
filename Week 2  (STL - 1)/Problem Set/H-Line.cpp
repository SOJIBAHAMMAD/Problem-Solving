#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        ll ans=0;
        vector<ll>change;
        for(int i=0;i<n;i++) {
            if(s[i]=='L') {
                ans+=i;
                change.push_back((n-1-i)-i);
            } else {
                ans+=n-1-i;
                change.push_back(i-(n-1-i));
            }
        }
        sort(change.begin(),change.end(),greater<ll>());
        for(int i=0;i<n;i++) {
            if(change[i]>0) {
                ans+=change[i];
            }
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}