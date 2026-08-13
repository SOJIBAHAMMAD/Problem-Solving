#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // 2 1 2 1 4 3 4 0
    int t;
    cin>>t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<n;i++) {
            if(s[i]=='B') {
                count++;
                i=i+k-1;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}