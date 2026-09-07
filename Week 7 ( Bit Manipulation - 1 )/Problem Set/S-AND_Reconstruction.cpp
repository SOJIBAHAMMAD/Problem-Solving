#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin>>t;
   while(t--) {
    int n;
    cin>>n;
    vector<int>a(n),b(n-1);
    for(auto &x : b) {
        cin>>x;
    }
    a[0]=b[0];
    a[n-1]=b[n-2];
    for(int i=1;i<n-1;i++) {
        a[i]=(b[i] | b[i-1]);
    }
    bool flag=true;
    for(int i=0;i<n-1;i++) {
        if(b[i] != (a[i]&a[i+1])) {
            flag=false;
            break;
        }
    }
    if(flag==false) {
        cout<<-1<<nl;
        continue;
    }
    for(auto val:a) {
        cout<<val<<" ";
    }
    cout<<nl;

   }
   return 0;
}