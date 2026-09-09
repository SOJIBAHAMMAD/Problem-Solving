// Method -1 

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n,k;
   cin>>n>>k;
   vector<int>a(n);
   for(int i=0;i<n;i++) {
    cin>>a[i];
   }
   while(k--) {
    int key;
    cin>>key;
    if(key <= a[0]) {
        cout<<1<<nl;
        continue;
    }
    auto it = lower_bound(a.begin(),a.end(),key);  // for 10 lower_bound return a.end() iterator
    int idx = it - a.begin();
    cout<<idx+1<<nl;
   }
   return 0;
}




// Method : 2 

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define nl '\n'
// int main () {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);

//     int n,k;
//     cin>>n>>k;
//     vector<int>a(n);
//     for(int i=0;i<n;i++) {
//         cin>>a[i];
//     }
//     while(k--) {
//         int key;
//         cin>>key;
//         int l=0,r=n-1;
//         if(key <= a[0]) {  // edge case
//             cout<<1<<nl;
//             continue;
//         }
//         if(key > a[n-1]) {  // edge case
//             cout<<n+1<<nl;
//             continue;
//         }
//         int ans=0;
//         while(l <= r) {
//             int mid = (l+r)/2;
//             if(key <= a[mid]) {    // not less then the given one (key)
//                 ans = mid;
//                 r = mid -1;
//             } else {
//                 l = mid +1;
//             }
//         }
//         cout<<ans+1<<nl;
//     }
//     return 0;
// }