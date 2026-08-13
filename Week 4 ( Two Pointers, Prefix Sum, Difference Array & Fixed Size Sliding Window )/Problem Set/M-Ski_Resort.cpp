#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        ll q;
        cin >> n >> k >> q;
        vector<ll> v(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll ans = 0, cons_sub_array = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] <= q)
            {
                cons_sub_array++;
            }
            else
            {
                if (cons_sub_array >= k)
                {
                    ll x = cons_sub_array - k + 1;
                    ll add = (x * (x + 1)) / 2;
                    ans += add;
                }
                cons_sub_array = 0;
            }
        }
        if (cons_sub_array >= k)
        {
            ll x = cons_sub_array - k + 1;
            ll add = (x * (x + 1)) / 2;
            ans += add;
        }
        cout << ans << endl;
    }
    return 0;
}