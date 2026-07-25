#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin>>s;
    stack<char>st;
    for(int i=0;i<s.length();i++) {
        if(!st.empty()) {
            if(s[i]=='<') {
                st.pop();
            } else {
                st.push(s[i]);
            }
        } else {
            st.push(s[i]);
        }
    }
    vector<char>ans;
    while(!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    for(auto val : ans) {
        cout<<val;
    }
    return 0;
}