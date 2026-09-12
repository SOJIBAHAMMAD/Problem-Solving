#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n,x;
   cin>>n>>x;
   vector<int>a(n);
   for(int i=0;i<n;i++) {
    cin>>a[i];
   }
   sort(a.begin(),a.end());
   // 2 3 7 9
   int i=0,j=n-1;
   int ans=0;
   while(i <= j) {
    if(a[i]+a[j] <= x) {
        ans++;
        i++;
        j--;
    } else if( a[i] + a[j] >= x) {
        j--;
        ans++;
    }
   }
   cout<<ans<<nl;
   return 0;
}