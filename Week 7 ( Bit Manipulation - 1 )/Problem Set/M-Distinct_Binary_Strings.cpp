#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
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
    stack<char>st;
    st.push(s[0]);
    for(int i=1;i<n;i++) {
        if(st.top() != s[i]) {
            st.push(s[i]);
        }
    }
    cout<<st.size()<<nl;
   }
   return 0;
}