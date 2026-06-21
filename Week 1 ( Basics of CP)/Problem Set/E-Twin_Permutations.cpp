#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>A(n);
        for(int i=0;i<n;i++) {
            cin>>A[i];
        }
        vector<int>B(n);
        for(int i=0;i<n;i++) {
            B[i]=n-A[i]+1;
        }
        for(int i=0;i<n-1;i++) {
            if(A[i]+B[i]>A[i+1]+B[i+1]) {
                swap(B[i],B[i+1]);
            }
        }
        for(int i=0;i<n;i++) {
            cout<<B[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}