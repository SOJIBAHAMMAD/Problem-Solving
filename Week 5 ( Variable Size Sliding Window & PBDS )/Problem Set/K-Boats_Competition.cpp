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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int mn_sum = v[0] + v[1];
        int mx_sum = v[n - 1] + v[n - 2];
        int ans = 0;
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        else if (n == 2 || n == 3)
        {
            cout << 1 << endl;
            continue;
        }
        else
        {
            for (int i = mn_sum; i <= mx_sum; i++)
            {
                int l = 0, r = n - 1, count = 0;
                while (l < r)
                {
                    if (v[l] + v[r] == i)
                    {
                        count++;
                        l++;
                        r--;
                    }
                    else if (v[l] + v[r] > i)
                    {
                        r--;
                    }
                    else
                    {
                        l++;
                    }
                }
                ans = max(ans, count);
            }
        }
        cout << ans << endl;
    }

    return 0;
}