#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int total_xor = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            total_xor ^= a[i];
        }
        int ans=total_xor;
        for(int i=0;i<n;i++) {
            ans = min(ans,(total_xor^a[i]));
        }
        cout<<ans<<nl;
    }
    return 0;
}