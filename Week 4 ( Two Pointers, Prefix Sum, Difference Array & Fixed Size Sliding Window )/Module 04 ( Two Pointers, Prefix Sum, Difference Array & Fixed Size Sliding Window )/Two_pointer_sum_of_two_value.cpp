// https://cses.fi/problemset/task/1640



// Brute force approch TC O(n2)

// #include<bits/stdc++.h>
// using namespace std;
// int main () {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int n,target;
//     cin>>n>>target;
//     vector<int>v(n);
//     for(int i=0;i<n;i++) {
//         cin>>v[i];
//     }
//     for(int i=0;i<n;i++) {
//         for(int j=i+1;j<n;j++) {
//             if(v[i]+v[j]==target) {
//                 cout<<i<<" "<<j<<endl;
//                 break;
//             }
//         }
//     }
//     return 0;
// }


// Optimize version TC O(n*logn)
#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,target;
    cin>>n>>target;
    vector<pair<int,int>>v;
    for(int i=1;i<=n;i++) {
        int x;
        cin>>x;
        v.push_back({x,i});
    }
    sort(v.begin(),v.end());
    int l=0,r=n-1;
    while(l<r) {
        int x=v[l].first+v[r].first;
        if(x==target) {
            cout<<v[l].second<<" "<<v[r].second<<endl;
            return 0;
        } else {
            if(x < target) {
                l++;
            } else {
                r--;
            }
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}

