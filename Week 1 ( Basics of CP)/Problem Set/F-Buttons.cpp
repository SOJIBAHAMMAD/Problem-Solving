#include<bits/stdc++.h>
using namespace std;
int main () {
    int A,B;
    cin>>A>>B;
    int ans=0;
    if(A>B) {
        ans= A+A-1;
    } else if(B>A) {
        ans=B+B-1;
    } else {
        ans=A+B;
    }
    cout<<ans<<endl;
    return 0;
}