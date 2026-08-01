// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main () {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    

//     ll t;
//     cin>>t;
//     while(t--) {
//         ll n;
//         cin>>n;
//         vector<int>v(n);
//         for(ll i=0;i<n;i++) {
//             cin>>v[i];
//         }
//         ll ans=1,idx=0;
//         set<ll>st;
//         st.insert(v[0]);
//         for(ll i=1;i<n;i++) {
//             if(st.find(v[i]) != st.end()) {
//                 st.erase(v[i]);
//             }
//             if(st.empty()) {
//                 ans++;
//                 for(ll j=idx+1;j<=i;j++) {
//                     st.insert(v[i]);
//                     idx=i;
//                 }
//             }
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    ll t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        vector<int>v(n);
        for(ll i=0;i<n;i++) {
            cin>>v[i];
        }
        set<int>st,store;
        int ans=0;
        for(int i=0;i<n;i++) {
            store.insert(v[i]);
            if(st.find(v[i]) != st.end()) {
                st.erase(v[i]);
            } 
            if(st.size()==0) {
                ans++;
                st=store;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}