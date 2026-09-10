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
   for(int i=0;i<n;i+=2) {
    if((i>0) && (a[i] < a[i-1]) ) {
      swap(a[i],a[i-1]);
    }
    if((i<n-1) && (a[i] < a[i+1])) {
      swap(a[i],a[i+1]);
    }
   }
   for(auto &x : a) {
    cout<<x<<" ";
   }
   return 0;
}