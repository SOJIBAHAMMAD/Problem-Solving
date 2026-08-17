#include <bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, 
tree_order_statistics_node_update>;
// if less<T> it act like set and if less_equal<T> then it act like multiset
// pbds<int>p;
// p.order_of_key(k) -> Number of item strictly smaller than k.
// p.find_by_order(k) -> K-th element of the set or multiset (0 based indexing) 
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   cin>>n;
   pbds<int>p;
   for(int i=0;i<n;i++) {
    int x;
    cin>>x;
    p.insert(x);
   }
   for(auto x:p) {
    cout<<x<<" ";
   }
   cout<<endl;


   // function 1 : It tells how many less element has of this given element
   // and we can use it in set or multiset. TC is O(logN)
   int x= p.order_of_key(6);
   cout<<x<<endl;

   // function 2 : If i give a index to this function it will me the iterator of this idx hold

   auto it = p.find_by_order(3);
   cout<<*it<<endl;
   return 0;
}