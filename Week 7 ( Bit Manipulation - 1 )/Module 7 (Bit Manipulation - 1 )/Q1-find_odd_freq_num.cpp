// Question : Find the only number which eixts odd times.

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   cin>>n;
   vector<ll>a(n);
   int ans=a[0];
   for(int i=0;i<n;i++) {
    cin>>a[i];
    ans = (ans ^ a[i]);
   }
   cout<<"The only number which eixts odd times is "<<ans<<nl;

   return 0;
}