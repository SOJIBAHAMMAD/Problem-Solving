#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long t;
    cin>>t;
    while(t--) {
        long long n;
        cin>>n;
        vector<long long>v(n);
        long long sum=0;
        for(long long i=0;i<n;i++) {
            cin>>v[i];
            sum+= abs(v[i]);
        }

        long long operation =0,zero_neg_cnt=0;
        for(long long i=0;i<n;i++) {
            if(v[i]==0 && zero_neg_cnt==0) { // getting zero from idx 0 to till
                continue;
            }

            if(v[i] <= 0) {
                zero_neg_cnt++;
            } else {
                if(zero_neg_cnt > 0) {
                    operation++;
                }
                zero_neg_cnt=0;
            }
        }
        if(zero_neg_cnt > 0) {  // maybe all element is negative
            operation++;
        }

        cout<<sum<<" "<<operation<<endl;
    }
    return 0;
}