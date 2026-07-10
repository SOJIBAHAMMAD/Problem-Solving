// Question : Find the occurence of given value using map.
#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    int target;
    cin>>target;
    map<int,int>mp;
    for(int i=0;i<n;i++) {
        mp[v[i]]++;
    }
    cout<<mp[target]<<endl;
    return 0;
}