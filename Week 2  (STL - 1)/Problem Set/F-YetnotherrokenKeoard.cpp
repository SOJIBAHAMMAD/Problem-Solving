#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int len=s.length();
        map<int,char>mp;
        stack<int>upper_case,lower_case;
        for(int i=0;i<len;i++) {
            if(s[i]=='B') {
                if(!upper_case.empty()) {
                    int idx=upper_case.top();
                    mp[idx]='#';
                    upper_case.pop();
                }
                continue;
            }
            if(s[i]=='b') {
                if(!lower_case.empty()) {
                    int idx=lower_case.top();
                    mp[idx]='#';
                    lower_case.pop();
                }
                continue;
            }
            mp[i]=s[i];
            if(isupper(s[i])==true) {
                upper_case.push(i);
            } else {
                lower_case.push(i);
            }
        }
        for(int i=0;i<len;i++) {
                if(mp.count(i) && mp[i]!='#') {
                    cout<<mp[i];
                }
            }
            cout<<endl;
    }
    return 0;
}