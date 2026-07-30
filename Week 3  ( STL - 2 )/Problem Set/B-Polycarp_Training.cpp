#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    multiset<int>ml;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        ml.insert(x);
    }
    int problem=1,count=0;
    while(!ml.empty()) {
        auto LB=ml.lower_bound(problem);
        if(LB != ml.end()) {
            count++;
            ml.erase(LB);
        } else {
            break;
        }
        problem++;
    }
    cout<<count<<endl;
    return 0;
}