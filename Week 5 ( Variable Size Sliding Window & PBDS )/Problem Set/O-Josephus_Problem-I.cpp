#include<bits/stdc++.h>
using namespace std;
#define ll long long

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T> using pbds = tree<T, null_type, less<T>, 
rb_tree_tag, tree_order_statistics_node_update>;
// if less<T> it act like set and if less_equal<T> then it act like multiset
// pbds<int>p;
// p.order_of_key(k) -> Number of item strictly smaller than k.
// p.find_by_order(k) -> K-th iterator of the set or multiset (0 based indexing).
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   cin>>n;
   pbds<int>p;
   for(int i=1;i<=n;i++) {
    p.insert(i);
   }
//    if(n==1) {
//     cout<<1<<endl;
//     return;
//    }
   // else int idx = 1 % n , which means if n=1 then 0 else 1.
   int idx = 1 % n;
   while(n--) {
    auto it=p.find_by_order(idx);
    cout<<*it<<" ";
    p.erase(it);
    if(n) {
        idx = (idx+1) % n;
    }
   }
   
   return 0;
}