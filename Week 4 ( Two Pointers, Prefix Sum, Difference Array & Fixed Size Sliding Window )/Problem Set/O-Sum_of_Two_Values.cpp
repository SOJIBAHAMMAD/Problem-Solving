
// Optimize version TC O(n*logn)
#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n,target;
    cin>>n>>target;
    vector<pair<long long,long long>>v;
    for(long long i=1;i<=n;i++) {
        long long x;
        cin>>x;
        v.push_back({x,i});
    }
    sort(v.begin(),v.end());
    long long l=0,r=n-1;
    while(l<r) {
        long long x=v[l].first+v[r].first;
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