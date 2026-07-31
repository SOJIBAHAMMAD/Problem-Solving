#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        int low=0,high=n-1;
        int mn=1,mx=n;
        while(high >= low) {
            if(v[low]==mn) {
                low++;
                mn++;
            } else if(v[low]==mx) {
                low++;
                mx--;
            } else if(v[high]==mn) {
                high--;
                mn++;
            } else if(v[high]==mx) {
                mx--;
                high--;
            } else {
                break;
            }
        }
        if(high >= low) {
            cout<<low+1<<" "<<high+1<<endl;
        } else {
            cout<<-1<<endl;
        }
    }
    return 0;
}