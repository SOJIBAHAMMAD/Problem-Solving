#include<bits/stdc++.h>
using namespace std;
int main () {
    string S,T;
    cin>>S;
    cin>>T;
    int len= S.length();
    int count=0;
    for(int i=0;i<len;i++) {
        if(S[i]!=T[i]) {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}