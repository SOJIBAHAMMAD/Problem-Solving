#include<bits/stdc++.h>
using namespace std;
int main () {
    int n,x;
    cin>>n>>x;
    set<int>s;
    for(int i=0;i<n;i++) {
        int val;
        cin>>val;
        s.insert(val);
    }
    int count=0;
    for(int i=0;i<x;i++) {
        if(s.find(i)==s.end()) {
            count++;
        }
    }
    if(s.find(x)!=s.end()) {
        count++;
    }
    cout<<count<<endl;
    return 0;
}