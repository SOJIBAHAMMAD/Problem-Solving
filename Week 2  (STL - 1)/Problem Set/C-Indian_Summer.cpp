#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    set<pair<string,string>>s;
    for(int i=0;i<n;i++) {
        string species,colour;
        cin>>species>>colour;
        s.insert({species,colour});
    }
    cout<<s.size()<<endl;
    return 0;
}