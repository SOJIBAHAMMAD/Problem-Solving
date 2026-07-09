#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // int n;
    // cin>>n;
    // string s;
    // for(int i=0;i<n;i++) {
    //     char ch;
    //     cin>>ch;
    //     s.push_back(ch);
    // }
    // s.pop_back();
    // cout<<s<<endl;
    // cout<<s.front()<<" "<<s.back()<<endl;

    string s;
    cin>>s;
    cout<<s.substr(0,3)<<endl;
    cout<<s.substr(3)<<endl;
    return 0;
}
