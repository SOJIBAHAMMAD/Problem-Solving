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
   for(auto &x : a) {
    cin>>x;
   }
   int l=0,r=0;
   while(r<n) {
    if(a[r] != 0) {
        //r++;
        swap(a[l],a[r]);
        l++;
    }
    r++;
   }
   for(auto &x : a) {
    cout<<x<<" ";
   }
   return 0;
}