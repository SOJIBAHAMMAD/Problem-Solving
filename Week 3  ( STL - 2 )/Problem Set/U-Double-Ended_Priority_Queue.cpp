#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,q;
    cin>>n>>q;
    multiset<int>ml;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        ml.insert(x);
    }
    while(q--) {
        int type;
        cin>>type;
        if(type==0) {
            int x;
            cin>>x;
            ml.insert(x);
        } else if(type==1) {
            auto it=ml.begin();
            cout<<*it<<endl;
            ml.erase(it);
        } else if (type==2) {
            auto it=ml.end();
            --it;
            cout<<*it<<endl;
            ml.erase(it);
        }
    }
    return 0;
}