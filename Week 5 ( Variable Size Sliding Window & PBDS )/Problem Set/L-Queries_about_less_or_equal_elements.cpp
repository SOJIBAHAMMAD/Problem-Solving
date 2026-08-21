#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, 
tree_order_statistics_node_update>;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n,m;
   cin>>n>>m;
   vector<int>a(n),b(m);
   for(int i=0;i<n;i++) {
    cin>>a[i];
   }
   for(int i=0;i<m;i++) {
    cin>>b[i];
   }
   pbds<int>p;
   for(int i=0;i<n;i++) {
    p.insert(a[i]);
   }
   for(int i=0;i<m;i++) {
    int x = p.order_of_key(b[i]+1);
    cout<<x<<" ";
   }
   cout<<endl;
   return 0;
}