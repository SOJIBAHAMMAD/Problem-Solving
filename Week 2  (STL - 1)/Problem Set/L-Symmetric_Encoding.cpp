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
        string s;
        cin>>s;
        set<char>st;
        for(int i=0;i<s.length();i++) {
            st.insert(s[i]);
        }
        map<char,char>mp;
        auto r_it=st.rbegin(); // r_it=reverse iterator
        for(auto it=st.begin();it!=st.end();it++) {
            mp[*it]=*r_it;
            r_it++;
        }
        for(int i=0;i<n;i++) {
            cout<<mp[s[i]];
        }
        cout<<endl;


    }
    return 0;
}