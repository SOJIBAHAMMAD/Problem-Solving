// Question : Check the number can be represent as a 2's power.

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   cin>>n;
   if((n & (n-1)) == 0) {
    cout<<"Possible"<<nl;
   } else {
    cout<<"Not possible"<<nl;
   }
   return 0;
}