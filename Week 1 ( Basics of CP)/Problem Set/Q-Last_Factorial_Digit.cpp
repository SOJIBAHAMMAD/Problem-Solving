#include<bits/stdc++.h>
using namespace std;
int fact(int N) {
    if(N==0 || N==1) {
        return N;
    }
    return N*fact(N-1);
}
int main () {
    int T;
    cin>>T;
    while(T--) {
        int N;
        cin>>N;
        int ans=fact(N);
        cout<<ans%10<<endl;
    }
    return 0;
}