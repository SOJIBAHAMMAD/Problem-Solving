// Brute force method TC is O(n2)
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main () {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);

//    int t;
//    cin>>t;
//    while(t--) {
//     int n;
//     cin>>n;
//     vector<int>a(n+1);
//     for(int i=1;i<=n;i++) {
//         cin>>a[i];
//     }
//     int ans=-1;
//     for(int i=1;i<=n;i++) {
//         for(int j=1;j<=n;j++) {
//             if(__gcd(a[i],a[j])==1) {
//                 ans = max(ans,i+j);
//             }
//         }
//     }
//     cout<<ans<<endl;
//    }
//    return 0;
// }


// Optimze method.
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin>>t;
   while(t--) {
    int n;
    cin>>n;
    vector<int>a(1001,0);
    for(int i=1;i<=n;i++) {
        int x;
        cin>>x;
        a[x]=i;
    }
    int ans=-1;
    for(int i=1;i<=1000;i++) {
        for(int j=1;j<=1000;j++) {
            if(a[i]!=0 && a[j]!=0 && __gcd(i,j)==1) {
                ans=max(ans,a[i]+a[j]);
            }
        }
    }
    cout<<ans<<endl;
    
   }
   
   return 0;
}