#include<bits/stdc++.h>
using namespace std;
#define ll long long
int findDivisor(int n) {
   for(int i=2;i*i<=n;i++) {
      if(n%i==0) {
         return i;
      }
   }
   return n;
}
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin>>t;
   while(t--) {
      int l,r;
      cin>>l>>r;
      if(r <= 3) {
         cout<<-1<<endl;
         continue;
      }
      if(r-l >= 1) { // l and r are not equal
         if(r%2==1) {
            r--;
         }
         cout<<r/2<<" "<<r/2<<endl;
         continue;
      } else {
         if(findDivisor(r)==r) { // prime number
            cout<<-1<<endl;
         } else {  //non-prime
            cout<<findDivisor(r)<<" "<< r - findDivisor(r)<<endl;
         }
      }
   }
   return 0;
}