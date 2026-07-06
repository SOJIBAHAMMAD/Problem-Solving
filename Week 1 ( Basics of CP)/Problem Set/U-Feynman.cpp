#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    while(cin>>n) {
        if(n==0) {
            break;
        }
        int ans=(n*(n+1)*(2*n+1))/6;
        cout<<ans<<endl;
    }
    return 0;
}