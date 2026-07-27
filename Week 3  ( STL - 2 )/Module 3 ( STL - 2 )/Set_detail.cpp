#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    int n;
    cin>>n;
    set<int>st;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        st.insert(x);
    }
    for(auto val : st) {
        cout<<val<<" ";
    }
    cout<<endl;


    // Find function
    auto it=st.find(4);
    if(it!=st.end()) {
        cout<<"Found"<<endl;
    } else {
        cout<<"Not found"<<endl;
    }


    // erase function
    if(st.find(3)!=st.end()) {
        st.erase(3);
    }
    for(auto val : st) {
        cout<<val<<" ";
    }
    cout<<endl;

    // Count function
    cout<<st.count(8)<<endl;

    // Lower bound 
    auto it1=st.lower_bound(6);
    cout<<*it1<<endl;

    // Upper bound (Stickly greater value)

    return 0;
}