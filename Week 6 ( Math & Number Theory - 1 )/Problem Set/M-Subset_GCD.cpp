#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin>>t;
   while(t--) {
     int n,k;
     cin>>n>>k;
     int x=n/k;  // this is max gcd
     int count=0;
     while(count < k) {
        cout<<x<<" ";
        x += n/k; // now if we add n/k again we will get 2nd element but max gcd remain same.
        count++;
     }
     cout<<endl;
   }
   return 0;
}