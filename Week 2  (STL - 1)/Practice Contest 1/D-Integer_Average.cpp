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
        vector<int>v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        if(v.size()==1) {
            cout<<"NO"<<endl;
        }
        for(int i=0;i<n-1;i++) {
            if((v[i]%2==0 && v[i+1]%2 !=0) || (v[i]%2!=0 && v[i+1]%2==0)) {
                cout<<"NO"<<endl;
            } else {
                cout<<"YES"<<endl;
                break;
            }
        }
    }
    return 0;
}