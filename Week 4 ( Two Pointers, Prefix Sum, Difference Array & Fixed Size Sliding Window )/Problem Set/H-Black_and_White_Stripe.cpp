#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        
        int i=0,j=0;
        int whites =0;
        int mini_white= INT_MAX;  // minimum W in each window
        while(j<n) {
            if(s[j] == 'W') {
                whites++;
            }

            if(j-i+1 < k) {   // j-i+1 is window size, which is k
                j++;
                continue;
            } 

            // whites variable hold the W's in the current window 
            mini_white = min(mini_white , whites);

            // needs to slide the window
            j++;
            // delete the prev window contribution if any
            if(s[i]=='W') {
                whites--;
            }
            i++;

        }
        cout<<mini_white<<endl;
    }
    return 0;
}