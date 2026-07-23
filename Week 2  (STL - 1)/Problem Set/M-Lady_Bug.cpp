#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string a,b;
        cin>>a;
        cin>>b;
        int f1=0,f2=0;
        for(int i=0;i<n;i++) {
            if(i%2==0) {
                if(a[i]=='1') {
                    f2--;
                }
                if(b[i]=='0') {
                    f1++;
                }
            } else {
                if(a[i]=='1') {
                    f1--;
                }
                if(b[i]=='0') {
                    f2++;
                }
            }
        }
        if(f1>=0 && f2>=0) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}