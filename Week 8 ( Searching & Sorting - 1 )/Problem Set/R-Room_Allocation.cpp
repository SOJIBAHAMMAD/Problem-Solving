#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   cin>>n;
   deque<pair<pair<int,int>,int>>guests;
   set<int> rooms;
   set<pair<int,int>> end_times;
   for(int i=1;i<=n;i++) {
      int start,end;
      cin>> start >> end;
      guests.push_back({{start,end},i});
      rooms.insert(i);
   }

   sort(guests.begin(),guests.end());
   int ans[n+2];
   int count=0;

   while(!guests.empty()) {
      auto [time , idx] = guests.front();
      auto [start , end] = time;
      if(end_times.size() && end_times.begin()->first < start) {
         rooms.insert(end_times.begin()->second);
         end_times.erase(end_times.begin());
      } else {
         int room = *rooms.begin();
         rooms.erase(rooms.begin());
         ans[idx]=room;
         end_times.insert({end,room});
         guests.pop_front();
      }
      count = max (count,(int)end_times.size());
   }
   cout<<count<<nl;
   for(int i=1;i<=n;i++) {
      cout<<ans[i]<<" ";
   }
   cout<<nl;
   return 0;
}