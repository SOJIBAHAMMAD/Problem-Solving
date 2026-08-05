#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin>>s;
    map<char,int>freq;
    for(int i=0;i<s.length();i++) {
        freq[s[i]]++;
    }
    char middle_char;
    string ans;
    int odd_freq=0;
    for(auto val : freq) {
        int y=val.first; // char
        int x=val.second; // frequency
        if(x%2==1) {
            odd_freq++;
            middle_char=y;
        }
        for(int i=1;i<=x/2;i++) {
            ans.push_back(y);
        }
    }
    if(odd_freq==0) {
        cout<<ans;
        reverse(ans.begin(),ans.end());
        cout<<ans;
    } else if(odd_freq==1) {
        cout<<ans<<middle_char;
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
    } else {
        cout<<"NO SOLUTION"<<endl;
    }
    return 0;
}