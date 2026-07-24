#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<string,int>freq;
    for(int i=0;i<n-1;i++) {
        string subString = s.substr(i,2);
        freq[subString]++;
    }
    string max_freq;
    int max_freq_val=INT_MIN;
    for(auto str : freq) {
        if(str.second>max_freq_val) {
            max_freq_val=str.second;
            max_freq=str.first;
        }
    }
    cout<<max_freq<<endl;
    return 0;
}