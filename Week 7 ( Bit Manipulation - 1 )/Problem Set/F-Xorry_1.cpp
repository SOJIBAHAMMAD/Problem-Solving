#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int height_power_of_2(int x) {
    if(x<1) {
        return 0;
    }
    x |= (x >> 1);
    x |= (x >> 2);
    x |= (x >> 4);
    x |= (x >> 8);
    x |= (x >> 16);

    return (x + 1) >> 1;
}
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin>>t;
   while(t--) {
    int x;
    cin>>x;
    int ans = height_power_of_2(x);
    cout<<x-ans<<" "<<ans<<nl;
   }
   return 0;
}