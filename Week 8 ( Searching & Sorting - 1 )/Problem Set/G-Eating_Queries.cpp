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
    int n,q;
    cin>>n>>q;
    vector<int>a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(a.rbegin(),a.rend());
    vector<int>pre_sum(n+1,0);
    for(int i=1;i<=n;i++) {
        pre_sum[i] = pre_sum[i-1] + a[i-1];
    }
    // 9 14 18 22 25 28 29 30
    while(q--) {
        int x;
        cin>>x;
        if(x > pre_sum[n]) {
            cout<<-1<<nl;
            continue;
        }
        auto it = lower_bound(pre_sum.begin(),pre_sum.end(),x);
        int idx = it - pre_sum.begin();
        cout<<idx<<nl;
    }
   }
   return 0;
}