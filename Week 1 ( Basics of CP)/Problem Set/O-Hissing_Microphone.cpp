#include<bits/stdc++.h>
using namespace std;
int main () {
    string S;
    cin>>S;
    int len=S.length();
    bool flag=false;
    for(int i=0;i<len-1;i++) {
        if(S[i]=='s' && S[i+1]=='s') {
            flag=true;
            break;
        }
    }
    if(flag) {
        cout<<"hiss"<<endl;
    } else {
        cout<<"no hiss"<<endl;
    }
    return 0;
}