#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        for(int i=0;i<n;i++) {
            cin>>s[i];
        }
        int first_B=-1;
        int last_B=-1;
        for(int i=0;i<n;i++) {
            if(s[i]=='B') {
                first_B=i;
            }
        }
        for(int i=n-1;i>=0;i--) {
            if(s[i]=='B') {
                last_B=i;
            }
        }
        cout<<abs(last_B-first_B)+1<<endl;
    }
    return 0;
}