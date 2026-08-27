#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   ll n,a,b,p,q;
   cin>>n>>a>>b>>p>>q;

   ll lcm = (a/__gcd(a,b))*b; // better for not overflow.
   ll divi_by_a = (n/a)*p, divi_by_b = (n/b)*q, overlap = (n/lcm);
   ll ans = divi_by_a + divi_by_b - overlap*(p+q) + overlap*max(p,q);
   cout<<ans<<endl;
   return 0;
}