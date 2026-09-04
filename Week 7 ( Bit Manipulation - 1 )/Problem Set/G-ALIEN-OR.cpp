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
    int n,k;
    cin>>n>>k;
    map<string,bool> ache;
    for(int i=0;i<n;i++) {
        string s;
        cin>>s;
        ache[s]=true;
    }
    string st;  // st = "000"
    for(int i=0;i<k;i++) {
        st.push_back('0');
    }

    bool flag=true;
    for(int i=0;i<k;i++) {
        st[i]='1';  // st = "100", 1st iteration then in 2nd 010
        if( !ache[st] ) {
            flag=false;
            break;
        }
        st[i]='0';
    }
    if(flag) {
        cout<<"YES"<<nl;
    } else {
        cout<<"NO"<<nl;
    }
   }
   return 0;
}