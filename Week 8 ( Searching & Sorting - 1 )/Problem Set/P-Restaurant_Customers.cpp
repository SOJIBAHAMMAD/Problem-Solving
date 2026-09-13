#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   cin>>n;
   map<int,int>mp;
   for(int i=1;i<=n;i++) {
    int a,b;
    cin>>a>>b;
    mp[a]++;
    mp[b+1]--;
   }
   int count=0,ans=0;
   for(auto [f,s] : mp) {
    count += s;
    ans = max(ans,count);
   }
   cout<<ans<<nl;
   return 0;
}