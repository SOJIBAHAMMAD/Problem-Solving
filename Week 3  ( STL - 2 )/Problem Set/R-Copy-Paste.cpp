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
        set<int>st;
        for(int i=1;i<=n;i++) {
            int x;
            cin>>x;
            st.insert(x);
        }
        cout<<st.size()<<endl;
    }
    return 0;
}