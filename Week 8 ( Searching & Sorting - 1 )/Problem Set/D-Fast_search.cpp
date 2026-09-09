#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   cin>>n;
   vector<int>a(n);
   for(int i=0;i<n;i++) {
      cin>>a[i];
   }
   sort(a.begin(),a.end());
   // 1 3 4 10 10
   int k;
   cin>>k;
   while(k--) {
      int l,r;
      cin>>l>>r;
      auto it1 = lower_bound(a.begin(),a.end(),l);
      int idx1 = it1 - a.begin();
      auto it2 = upper_bound(a.begin(),a.end(),r);
      int idx2 = it2 - a.begin();
      int ans = (idx2 - idx1);
      cout<<ans<<" ";
   }
   return 0;
}