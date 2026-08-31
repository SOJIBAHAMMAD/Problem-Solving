#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin>>t;
   while(t--) {
    ll a,b,n;
    cin>>a>>b>>n;
    if(a%b==0) {
        cout<<-1<<endl;
        continue;;
    }
    ll x=((n+a-1)/a)*a;
    while(x%b==0) {
        x +=a;
    }
    cout<<x<<endl;
   }
   return 0;
}