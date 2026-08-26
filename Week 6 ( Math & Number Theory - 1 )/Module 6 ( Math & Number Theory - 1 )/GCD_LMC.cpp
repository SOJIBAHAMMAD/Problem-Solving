#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int a,b;
   cin>>a>>b;
   
   // GCD -> Greatest common divisor
   // 16 -> 1,2,4,8,16
   // 24 -> 1,2,3,4,6,8,12,24
   // So greatest common is 8
   cout<<__gcd(a,b)<<endl;  // TC is O(log(min(a,b))

   // LCM -> Least common multiple
   // 16 -> 16,32,48...
   // 24 -> 24,48,72...
   // So least common multiple is 48

   // We know that gcd(a,b)*lcm(a,b)=a*b;
   cout<<(a*b)/__gcd(a,b)<<endl;  // TC is O(log(min(a,b))
   return 0;
}