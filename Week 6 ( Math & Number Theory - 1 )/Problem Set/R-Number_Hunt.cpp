#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool isPrime(ll n) {
    if(n==1) {
        return false;
    }
    for(int ll i=2;i*i<=n-1;i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}
bool perfect_square(int n) {
    ll root = sqrt(n);
    return root * root == n;
}
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin>>t;
   while(t--) {
    ll x;
    cin>>x;
    for(int i=1;i<=100;i++) {
        if(!isPrime(i) && !perfect_square(i) && )
    }
   }
   return 0;
}