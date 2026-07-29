#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    vector<int>distinct_element(n);
    set<int>st;
    for(int i=n-1;i>=0;i--) {
        st.insert(v[i]);
        distinct_element[i]=st.size();
    }
    for(int i=0;i<m;i++) {
        int pos;
        cin>>pos;
        cout<<distinct_element[pos-1]<<endl;
    }
    return 0;
}
