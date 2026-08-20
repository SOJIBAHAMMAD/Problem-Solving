
// Q1 : find the count of sumArray which sum is k
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main () {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int n,k;
//     cin>>n>>k;
//     vector<int>a(n);
//     for(int i=0;i<n;i++) {
//         cin>>a[i];
//     }
//     int count=0;
//     for(int i=0;i<n;i++) {
//         int sum=0;
//         for(int j=i;j<n;j++) {
//             sum += a[j];
//             if(sum == k) {
//                 count++;
//             }
//         }
//     }
//     cout<<count<<endl;
//     return 0;
// }


// Q2 : (Brute force) find the longest subArray which sum is k
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main () {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int n,k;
//     cin>>n>>k;
//     vector<int>a(n);
//     for(int i=0;i<n;i++) {
//         cin>>a[i];
//     }
//     int ans=0;
//     for(int i=0;i<n;i++) {
//         int sum=0;
//         for(int j=i;j<n;j++) {
//             sum += a[j];
//             if(sum == k) {
//                 ans = max(ans,j-i+1);
//             }
//         }
//     }
//     cout<<ans<<endl;
//     return 0;
// }


// Optimal solution
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    //input
    // 6 15
    // 10 5 2 7 1 -10
    map<int,int> sumSeenIndexMap;
    int Pref_sum=0,maxLen=0;
    for(int i=0;i<n;i++) {
        Pref_sum += a[i];
        // 10 15 17 24 25 15
        if(Pref_sum==k) {
            maxLen=max(maxLen,i+1);
        }
        if(sumSeenIndexMap.find(Pref_sum-k) != sumSeenIndexMap.end()) {
            maxLen = max(maxLen,i-sumSeenIndexMap[Pref_sum-k]);
        }
        if(sumSeenIndexMap.find(Pref_sum) == sumSeenIndexMap.end()) {
            sumSeenIndexMap[Pref_sum] = i;
        }
    }
    cout<<maxLen<<endl;
    return 0;
}