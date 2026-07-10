#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // int n,m;
    // cin>>n>>m;
    // vector<vector<int>>v(n,vector<int>(m)); // here n is row and vector<int>(m) is coloum

    // for(int i=0;i<n;i++) {
    //     for(int j=0;j<m;j++) {
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin>>n;
    // vector<vector<int>>v;
    // for(int i=0;i<n;i++) {
    //     int m;
    //     cin>>m;
    //     vector<int>a;
    //     for(int j=0;j<m;j++) {
    //         int x;
    //         cin>>x;
    //         a.push_back(x);
    //     }
    //     v.push_back(a);
    // }

    // for(int i=0;i<n;i++) {
    //     for(int j=0;j<v[i].size();j++) {
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int n;
    cin>>n;
    vector<string>v;
    for(int i=0;i<n;i++) {
        string s;
        cin>>s;
        v.push_back(s);
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<v[i].size();j++) {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}