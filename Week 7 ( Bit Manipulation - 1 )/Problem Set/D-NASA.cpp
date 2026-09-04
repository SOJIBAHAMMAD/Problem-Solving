#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const int maxN = (1 << 15);
bool isPalindrome(int num) {
    string s = to_string(num);
    int l=0,r=s.size()-1;
    while(l<=r) {
        if(s[l] != s[r]) {
            return false;
        }
        l++;
        r--;
    }
    return true;
}
vector<int>allPalindrome;
void markPalindrome() {
    for(int i=0;i<maxN;i++) {
        if(isPalindrome(i)) {
            allPalindrome.push_back(i);
        }
    }
}
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin>>t;
   markPalindrome();
   while(t--) {
    int n;
    cin>>n;
    vector<int>a(n),count(maxN+1);
    for(int i=0;i<n;i++) {
        cin>>a[i];
        count[a[i]]++;
    }

    ll ans=n;  
    for(int i=0;i<n;i++) {
        for(int j=0;j<allPalindrome.size();j++) {
            int curr = (a[i] ^ allPalindrome[j]);
            ans += count[curr];
        }
     }
    cout<<(ans/2)<<nl;
   }
   return 0;
}