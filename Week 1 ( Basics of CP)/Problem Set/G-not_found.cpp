#include<bits/stdc++.h>
using namespace std;
int main () {
    string s;
    cin>>s;
    int freq[26]={0};
    for(int i=0;i<s.length();i++) {
        int val=s[i]-'a';
        freq[val]++;
    }
    bool flag=false;
    int i;
    for(i=0;i<26;i++) {
        if(freq[i]==0) {
            flag=true;
            break;
        }
    }
    if(flag) {
        cout<<char('a'+i)<<endl;
    } else {
        cout<<"None"<<endl;
    }
    return 0;
}