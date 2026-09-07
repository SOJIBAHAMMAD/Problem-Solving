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
    int x=0;
    for(int i=0;i<n;i++) {
        x ^= a[i];
    }

    for(int i=0;i<n;i++) {
        a[i] ^= x;
    }
    int ans=0;
    for(int i=0;i<n;i++) {
        ans ^= a[i];
    }
    if(ans==0) {
        cout<<x<<nl;
    } else {
        cout<<-1<<nl;
    }
   }
   return 0;
}