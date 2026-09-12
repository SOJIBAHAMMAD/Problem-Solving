#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n,m;
   cin>>n>>m;
   multiset<int>tickets;
   for(int i=0;i<n;i++) {
    int x;
    cin>>x;
    tickets.insert(x);
   }
   for(int i=0;i<m;i++) {
    int y;
    cin>>y;
    auto it = tickets.upper_bound(y);
    if(it == tickets.begin()) {
        cout<<-1<<nl;
    } else {
        it--;
        cout<<*it<<nl;
        tickets.erase(it);
    }
   }

   return 0;
}