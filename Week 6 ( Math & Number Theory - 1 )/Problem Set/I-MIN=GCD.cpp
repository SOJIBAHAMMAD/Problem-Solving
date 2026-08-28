#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin>>t;
   while(t--) {
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++) {
        cin>>a[i];
    }
    ll mn_idx= min_element(a.begin(),a.end())-a.begin();
    ll gcd=0;
    for(int i=0;i<n;i++) {
        if(i!=mn_idx && a[i]%a[mn_idx]==0) {
            gcd = __gcd(gcd,a[i]);
        }
    }
    if(a[mn_idx]==gcd) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
   }
   return 0;
}