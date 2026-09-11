#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   vector<int>a={2,2,1,1,2};
   int vote_count = 0,candidate = 0;
   for(int i=0;i<a.size();i++) {
    int curr_num = a[i];
    if(vote_count == 0) {
        candidate = curr_num;
    }
    // Election logic 
    if(curr_num == candidate) {
        vote_count++;
    } else {
        vote_count--;
    }
   }
   cout<<candidate<<nl;
   return 0;
}