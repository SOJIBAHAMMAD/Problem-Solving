#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int q;
    cin>>q;
    set<int>st;
    while(q--) {
        int y,x;
        cin>>y>>x;
        if(y==1) {
            st.insert(x);
        } else if (y==2) {
            auto it=st.find(x);
            if(it != st.end()) {
                st.erase(x);
            }
        } else if(y==3) {
            auto it=st.find(x);
            if(it != st.end()) {
                cout<<"Yes"<<endl;
            } else {
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}