#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // tuple<string,int,string> t = {"Sajib",10,"01790768780"};
    // cout<<get<0>(t)<<" "<<get<1>(t)<<" "<<get<2>(t)<<endl;

    //auto [name,roll,phone_num]=t;

    // we can do it with pair also

    pair<string,pair<int,string>> q = {"Sajib",{10,"0140366"}};
    cout<<q.first<<" "<<q.second.first<<" "<<q.second.second<<endl;
    cout<<endl;

    int n;
    cin>>n;
    pair<string,pair<int,string>>p[n];
    for(int i=0;i<n;i++) {
        cin>>p[i].first>>p[i].second.first>>p[i].second.second;
    }

    for(int i=0;i<n;i++) {
        cout<<p[i].first<<" "<<p[i].second.first<<" "<<p[i].second.second<<endl;
    }
    return 0;
}