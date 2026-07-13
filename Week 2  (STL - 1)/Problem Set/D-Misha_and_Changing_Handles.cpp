#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int q;
    cin>>q;
    map<string,string>ans,has;
    for(int i=0;i<q;i++) {
        string a,b;
        cin>>a>>b;
        if(has.find(a) != has.end()) {
            string s = has[a];
            ans[s] = b;
            has.erase(b);
            has[b] = s;

        } else {
            ans[a]=b;
            has[b]=a;
        }
    }
    cout<<ans.size()<<endl;
    for(auto x : ans) {
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}