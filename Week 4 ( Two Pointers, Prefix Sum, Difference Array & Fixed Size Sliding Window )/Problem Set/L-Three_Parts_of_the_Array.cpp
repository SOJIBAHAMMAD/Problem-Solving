#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n;
    cin>>n;
    vector<long long>v(n+1);
    for(long long i=0;i<n;i++) {
        cin>>v[i];
    }

    long long l=0,r=n-1,ans;
    long long sum1=0,sum3=0;
    while(l<=r) {
        if(sum1>sum3) {
            sum3 += v[r];
            r--;
        } else {
            sum1 += v[l];
            l++;
        }
        if(sum1==sum3) {
            ans=sum1;
        }
    }
    cout<<ans<<endl;
    return 0;
}