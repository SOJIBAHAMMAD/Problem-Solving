#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll lcm(ll a,ll b) {
    return (a/__gcd(a,b))*b;
}
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin>>t;
   while(t--) {
    ll a,b;
    cin>>a>>b;
    ll x = __gcd(a,b);
    cout<< lcm(a,x) - __gcd(b,x)<<endl;
   }
   return 0;
}