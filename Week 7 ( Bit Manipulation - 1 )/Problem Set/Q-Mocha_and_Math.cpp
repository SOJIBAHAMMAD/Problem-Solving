#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin>>t;
   while(t--) {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int ans=a[0];
    for(int i=1;i<n;i++) {
        ans &= a[i];
    }
    cout<<ans<<nl;
   }
   return 0;
}