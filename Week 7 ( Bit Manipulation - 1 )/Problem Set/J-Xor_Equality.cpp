#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const int modulo=1e9+7;
int power(ll x,int expo,int m) {
    int res=1;
    x=x%m;
    if(x==0) return 0;
    while(expo > 0) {
        if(expo & 1) {
            res = (res*x) % m;
        }
        expo = expo >> 1;
        x=(x*x) % m;
    }
    return res;
}
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin>>t;
   while(t--) {
    int n;
    cin>>n;
    int ans=power(2,n-1,modulo);
    cout<<ans<<nl;
   }
   return 0;
}