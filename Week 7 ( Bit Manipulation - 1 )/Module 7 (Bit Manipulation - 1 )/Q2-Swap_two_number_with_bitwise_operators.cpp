#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int a,b;
   cin>>a>>b;
   a=a^b;
   b=a^b;
   a=a^b;
   cout<<a<<" "<<b<<nl;
   return 0;
}