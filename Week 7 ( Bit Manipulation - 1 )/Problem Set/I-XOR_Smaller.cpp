
// Broute force method
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define nl '\n'
// int main () {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);

//    int t;
//    cin>>t;
//    while(t--) {
//     int n;
//     cin>>n;
//     vector<int>a(n);
//     for(int i=0;i<n;i++) {
//         cin>>a[i];
//     }
//     int count=0;
//     for(int i=1;i<=100;i++) {
//         bool flag=true;
//         for(int j=0;j<n;j++) {
//             bool x = ((i ^ a[j]) < a[j]);
//             if(!x) {
//                 flag=false;
//                 break;
//             }
//         }
//         if(flag) {
//             count++;
//         }
//     }
//     cout<<count<<nl;
//    }
//    return 0;
// }



// Optimize method
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin>>t;
   while(t--) {
    int n;
    cin>>n;
    vector<int>a(n);
    int x = INT_MAX;  // becouse of we are doing AND opration
    for(int i=0;i<n;i++) {
        cin>>a[i];
        x &= a[i];
    }
    int possible = 1; // means in 1st binary digit of every number can be 1;
    int ans = 0;
    while(x) {
        
        if( x & 1 ) {             //       1001
                                  //       0001
            ans += possible;      // ans-> 0001 that means most right a 1 ache
        }
        possible *= 2;
        x /= 2;  // 1001 become 100 or x = (x >> 1) it's called right shift

    }    
    cout<<ans<<nl;
   }
   return 0;
}