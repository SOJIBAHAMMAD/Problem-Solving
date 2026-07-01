#include<bits/stdc++.h>
using namespace std;
int main () {
    int N;
    cin>>N;
    vector<string>v(N);
    for(int i=0;i<N;i++) {
        cin>>v[i];
    }
    for(int i=0;i<N;i++) {
        if(i%2==0) {
            cout<<v[i]<<endl;
        }
    }
    return 0;
}