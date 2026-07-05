#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    long long moves=0;
    for(int i=0;i<n-1;i++) {
        if(arr[i]>arr[i+1]) {
            long long x=arr[i]-arr[i+1];
            moves+=x;
            arr[i+1]+=x;
        }
    }
    cout<<moves<<endl;
    return 0;
}