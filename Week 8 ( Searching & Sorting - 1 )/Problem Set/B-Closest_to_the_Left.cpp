#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n,k;
   cin>>n>>k;
   vector<int>a(n);
   for(int i=0;i<n;i++) {
    cin>>a[i];
   }
   while(k--) {
      int key;
      cin>>key;
      int l=0,r=n-1;
      if(a[0] > key) {
         cout<<0<<nl;
         continue;
      }
      int ans=0;
      while(l<=r) {
         int mid = (l+r)/2;
         if(key >= a[mid]) {
            ans=mid;
            l=mid+1;
         } else {
            r=mid-1;
         }
      }
      cout<<ans+1<<nl;
   }
   return 0;
}