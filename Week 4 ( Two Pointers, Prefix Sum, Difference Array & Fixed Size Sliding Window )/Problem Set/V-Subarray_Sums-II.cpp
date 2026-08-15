#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,expected_sum;
    cin>>n>>expected_sum;
    map<ll,ll>sum_freq;
    sum_freq[0]=1;
    ll sum=0,ans=0;
    for(int i=1;i<=n;i++) {
        int x;
        cin>>x;
        sum+=x;
        ans+=sum_freq[sum-expected_sum];
        sum_freq[sum]++;
    }
    cout<<ans<<endl;
    return 0;
}