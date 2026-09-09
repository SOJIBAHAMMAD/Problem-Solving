#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
bool Binary_Search(vector<int>&a,int l,int r,int target) {

    if( l > r) return false;
    int mid = (l+r)/2;
    if(target == a[mid]) {
        return true;
    } else if( target > a[mid]) {
        return Binary_Search(a,mid+1,r,target);
    } else if( target < a[mid]) {
        r = mid-1;
        return Binary_Search(a,l,mid-1,target);
    }
}
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n,k;
   cin>>n>>k;
   vector<int>a(n);
   for(int i=0;i<n;i++) {
    cin>>a[i];
   }
   while(k--) {
    int target;
    cin>>target;
    bool ans = Binary_Search(a,0,n-1,target);
    if(ans) {
        cout<<"YES"<<nl;
    } else {
        cout<<"NO"<<nl;
    }
   }
   
   return 0;
}
