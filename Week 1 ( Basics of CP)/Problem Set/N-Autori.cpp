#include<bits/stdc++.h>
using namespace std;
int main () {
    string S;
    cin>>S;
    int len=S.length();
    int i=0;
    cout<<S[i];
    for(i=1;i<len;i++) {
        if(S[i]=='-') {
            cout<<S[i+1];
        }
    }
    return 0;
}