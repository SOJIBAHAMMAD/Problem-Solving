#include<bits/stdc++.h>
using namespace std;
int fact(int n) {
    if(n==0 || n==1) {
        return 1;
    }
    return n*fact(n-1);
}
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        cout<<fact(n)/fact(n-2)<<endl;
    }
    return 0;
}