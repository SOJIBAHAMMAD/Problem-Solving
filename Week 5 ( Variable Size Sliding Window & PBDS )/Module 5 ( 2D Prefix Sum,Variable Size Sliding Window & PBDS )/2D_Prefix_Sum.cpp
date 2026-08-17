// Q : https://cses.fi/problemset/task/1652/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n,q;
   cin>>n>>q;
   vector<vector<ll>> pref(n+1,vector<ll>(n+1,0));
   string s[n];
   for(int i=0;i<n;i++) {
    cin>>s[i];
   }

   for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) {
        pref[i+1][j+1]= (s[i][j]=='*'); // 1 based idx and tree convert into 1.
    }
   }
   for(int i=1;i<=n;i++) {
    for(int j=1;j<=n;j++) {
        pref[i][j] = pref[i][j] + pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1];
    }
   }

   while(q--) {
    ll x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    cout<<pref[x2][y2] - pref[x1-1][y2] - pref[x2][y1-1] + pref[x1-1][y1-1]<<endl;
   }
   return 0;
}
