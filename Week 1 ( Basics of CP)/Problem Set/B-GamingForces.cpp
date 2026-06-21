#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int health[n];
        for(int i=0;i<n;i++) {
            cin>>health[i];
        }
        int count_one=0,count_non_one=0;
        for(int i=0;i<n;i++) {
            if(health[i]==1) {
                count_one++;
            } else {
                count_non_one++;
            }
        }
        int spells=count_non_one;
        if(count_one%2==0) {
            spells+=count_one/2;
        } else {
            spells+=((count_one)/2)+1;
        }
        cout<<spells<<endl;
    }
    return 0;
}