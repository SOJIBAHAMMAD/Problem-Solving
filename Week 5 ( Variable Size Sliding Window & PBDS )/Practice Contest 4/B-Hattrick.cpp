#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--) {
        vector<char>v(6);
        for(int i=0;i<6;i++) {
            cin>>v[i];
        }
        int count=0;
        bool flag=false;
        for(int i=0;i<6;i++) {
            if(v[i]=='W') {
                count++;
                if(count >= 3) {
                    flag=true;
                    break;
                }
            } else {
                count=0;
            }
        }
        if(flag) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }    
    return 0;
}