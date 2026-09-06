#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int setbits(int n) {
    int count=0;
    while(n > 0) {
        count++;
        n = (n >> 1);
    }
    return count;
}
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin>>t;
   while(t--) {
    int n;
    cin>>n;
    int a=setbits(n);
    int ans1= n-pow(2,a-1)+1;
    int ans2=pow(2,a-1)-pow(2,a-2);
    cout<<max(ans1,ans2)<<nl;
   }
   return 0;
}