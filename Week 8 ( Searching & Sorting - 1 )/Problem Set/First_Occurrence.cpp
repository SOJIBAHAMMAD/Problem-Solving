#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n,key;
   cin>>n>>key;
   vector<int>a(n);
   for(int i=0;i<n;i++) {
    cin>>a[i];
   }
   int l=0,r=n-1;
   int ans=-1;
   while(l<=r) {
    int mid = l + (r-l)/2;
    if(key == a[mid]) {
        ans = mid;
        r = mid -1;
    } else if(key < a[mid]) {
        r = mid -1;
    } else {
        l = mid +1;
    }
   }
   cout<<ans+1<<nl;  // 1 based indexing
   return 0;
}