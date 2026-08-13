// Brute force method TC is O(n^3)

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main () {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int n,target;
//     cin>>n>>target;
//     vector<ll>v(n);
//     for(int i=0;i<n;i++) {
//         cin>>v[i];
//     }
//     int count=0;
//     for(int i=0;i<n;i++) {
//         for(int j=i;j<n;j++) {
//             int sum=0;
//             for(int k=i;k<=j;k++) {
//                 sum += v[k];
//             }
//             if(sum==target) count++;
//         }
//     }
//     cout<<count<<endl;
//     return 0;
// }


// Optimized method

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,target;
    cin>>n>>target;
    vector<ll>v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    int count=0;
    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++) {
            int sum=0;
            for(int k=i;k<=j;k++) {
                sum += v[k];
            }
            if(sum==target) count++;
        }
    }
    cout<<count<<endl;
    return 0;
}