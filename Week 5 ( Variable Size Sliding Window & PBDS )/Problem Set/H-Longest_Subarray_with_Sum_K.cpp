// class Solution {
//   public:
//     int longestSubarray(vector<int>& a, int k) {
//         // code here
//         map<int,int> sumSeenIndexMap;
//         int Pref_sum=0,maxLen=0;
//         for(int i=0;i<a.size();i++) {
//             Pref_sum += a[i];
//         // 10 15 17 24 25 15
//             if(Pref_sum==k) {
//                 maxLen=max(maxLen,i+1);
//             }
//             if(sumSeenIndexMap.find(Pref_sum-k) != sumSeenIndexMap.end()) {
//                 maxLen = max(maxLen,i-sumSeenIndexMap[Pref_sum-k]);
//             }
//             if(sumSeenIndexMap.find(Pref_sum) == sumSeenIndexMap.end()) {
//                 sumSeenIndexMap[Pref_sum] = i;
//             }
//         }
//         return maxLen;
//     }
// };


// Q : (Brute force) find the longest subArray which sum is k
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




// VS code version

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
    // 9 4
    // 5 2 2 5 1 1 1 1 4
    map<int,int> sumSeenIndexMap;
    int Pref_sum=0,maxLen=0;
    for(int i=0;i<n;i++) {
        Pref_sum += a[i];
        // 5 7 9 14 15 16 17 18 22
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