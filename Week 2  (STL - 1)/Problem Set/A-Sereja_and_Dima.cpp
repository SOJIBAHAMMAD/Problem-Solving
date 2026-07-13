#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
    int n;
    cin>>n;
    vector<int>card(n);
    for(int i=0;i<n;i++) {
        cin>>card[i];
    }
    ll sereja_sum=0,dima_sum=0;
    int l=0,r=n-1;
    bool sereja_trun=true;
    while(l <= r) {
        if(card[r] > card[l]) {
            if(sereja_trun==true) {
                sereja_sum+=card[r];
            } else {
                dima_sum+=card[r];
            }
            r--;
        } else {
            if(sereja_trun==true) {
                sereja_sum+=card[l];
            } else {
                dima_sum+=card[l];
            }
            l++;
        }
        sereja_trun=!sereja_trun;
    }
    cout<<sereja_sum<<" "<<dima_sum<<endl;
    return 0;
}
