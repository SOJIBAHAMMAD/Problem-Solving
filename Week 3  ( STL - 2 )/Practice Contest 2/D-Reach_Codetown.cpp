#include<bits/stdc++.h>
using namespace std;
bool isVowel(char ch) {
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
        return true;
    } else {
        return false;
    }
}
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    string target="CODETOWN";
    while(t--) {
        string s;
        cin>>s;
        bool possible=true;
        for(int i=0;i<8;i++) {
            bool x=isVowel(s[i]);
            bool y=isVowel(target[i]);
            if(x!=y) {
                possible=false;
                break;
            }
        }
        if(possible) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}