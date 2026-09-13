#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n,target;
   cin>>n>>target;
   vector<pair<int,int>>a;
   for(int i=0;i<n;i++) {
    int x;
    cin>>x;
    a.push_back({x,i});
   }
   sort(a.begin(),a.end());  // O(nlogn)
   int l=0,r=n-1;
   while(l<r) {
    int sum = a[l].first + a[r].first;
    if(sum==target) {
        cout<<a[l].second<<" "<<a[r].second<<nl;
        break;
    } else if(sum < target) {
        l++;
    } else {
        r--;
    }
   }
   return 0;
}