#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    // In map (key,value) key will be unique and sorted.
    map<int,int>mp;
    mp[10]=20;
    mp[2]=12;
    mp[10]=15;
    mp[3]=10;
    mp[5]=14;
    mp[9]=29;

    // cout<<mp[10]<<endl;
    // cout<<mp[2]<<endl;

    for(auto val : mp) {
        cout<<val.first<<"->"<<val.second<<endl;
    }
    cout<<endl;
    // find() function use TC is O(logN)

    // auto it=mp.find(20);
    // if(it==mp.end()) {
    //     cout<<"Key not found"<<endl;
    // } else {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    // erase function TC is O(logN) 

    
    // auto it=mp.find(11);
    // if(it==mp.end()) {
    //     cout<<"Key not found"<<endl;
    // } else {
    //     mp.erase(it); 
    //     for(auto val : mp) {
    //         cout<<val.first<<"->"<<val.second<<endl;
    //     }
    // }


    // lower bound function TC is O(logN)
    auto it = mp.lower_bound(6);  // <=
    cout<<it->first<<" "<<it->second<<endl;
    

    // upper_bound function TC is O(logN)
    auto it2=mp.upper_bound(9); // <
    cout<<it2->first<<" "<<it2->second<<endl;
    
    return 0;
}