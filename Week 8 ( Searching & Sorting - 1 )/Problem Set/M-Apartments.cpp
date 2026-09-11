#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n,m,k;
   cin>>n>>m>>k;
   vector<int>a(n),b(m);
   for(int i=0;i<n;i++) {
    cin>>a[i];
   }

   for(int i=0;i<m;i++) {
    cin>>b[i];
   }

   sort(a.begin(),a.end());
   sort(b.begin(),b.end());

   // 45 60 60 80
   // 30 60 75
   int ans=0;
   for(int i=0,j=0;i<n && j<m;) {
    if(abs(a[i]-b[j]) <= k) {
        ans++;
        i++;
        j++;
    } else if( a[i] < b[j] ) {
        i++;
    } else {
        j++;
    }
   }
   cout<<ans<<nl;
   return 0;
}