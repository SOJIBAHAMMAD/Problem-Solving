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
        int m;
        cin>>m;
        while(m--) {
            string s;
            cin>>s;
            if(s.size()!=n) {
                cout<<"NO"<<endl;
                continue;
            }
            map<char,vector<int>>mp;
            for(int i=0;i<s.size();i++) {
                mp[s[i]].push_back(i);
            }
            bool flag=true;
            for(auto val : mp) {
                vector<int>ans=val.second;
                for(int i=0;i<ans.size()-1;i++) {
                    if(v[ans[i]]!=v[ans[i+1]]) {
                        flag=false;
                        break;
                    }
                }
            }
            if(!flag) {
                cout<<"NO"<<endl;
                continue;
            }
            map<int,vector<int>>mp2;
            for(int i=0;i<n;i++) {
                mp2[v[i]].push_back(i);
            }
            for(auto val : mp2) {
                vector<int>ans2=val.second;
                for(int i=0;i<ans2.size()-1;i++) {
                    if(s[ans2[i]] != s[ans2[i+1]]) {
                        flag=false;
                        break;
                    }
                }
            }
            if(flag) {
                cout<<"YES"<<endl;
            } else {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}