#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s1,s2;
    cin>>s1>>s2;
    map<char,int>mp;
    for(int i=0;i<s2.size();i++) {
        mp[s2[i]]++;
    }
    for(auto val: mp) {
        cout<<val.first<<" -> "<<val.second<<endl;
    }

    int k=s2.size();

    int l=0,r=0;
    int n=s1.size();
    while(l<n) {
        
    }
    return 0;
}