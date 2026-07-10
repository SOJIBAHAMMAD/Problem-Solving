#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin>>s;
    int len=s.length();
    map<string,int>mp;
    for(int i=0;i<len;i++) {
        for(int j=i;j<len;j++) {
            mp[s.substr(i,j-i+1)];
        }
    }
    cout<<mp.size()<<endl;
    for(auto val : mp) {
        cout<<val.first<<" -> "<<val.second<<endl;
    }
    return 0;
}