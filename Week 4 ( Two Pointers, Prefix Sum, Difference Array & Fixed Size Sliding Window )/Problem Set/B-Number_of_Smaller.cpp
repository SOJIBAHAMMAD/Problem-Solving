#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin>>n>>m;
    vector<int>v1(n),v2(m);
    for(int i=0;i<n;i++) {
        cin>>v1[i];
    }
    for(int i=0;i<m;i++) {
        cin>>v2[i];
    }
    vector<int>ans;
    int count=0;
    int l=0,r=0;
    while(r!=m) {  // or r<m condition also valid
        if( l<n && v1[l] < v2[r] ) {  // l can be end before ending r
            count++;
            l++;
        } else {
            r++;
            ans.push_back(count);
        }
    }
    for(auto val : ans) {
        cout<<val<<" ";
    }
    return 0;
}