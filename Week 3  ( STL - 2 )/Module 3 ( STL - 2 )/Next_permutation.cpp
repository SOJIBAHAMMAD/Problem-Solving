#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    vector<string>ans;
    ans.push_back(s);
    
    while(next_permutation(s.begin(),s.end())) {
        ans.push_back(s);
    }
    
    cout<<ans.size()<<endl;
    for(auto str : ans) {
        cout<<str<<endl;
    }
    return 0;
}
