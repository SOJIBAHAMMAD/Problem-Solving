#include <bits/stdc++.h>
using namespace std;
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
        string s;
        cin >> s;
        int ans = INT_MAX;
        for (char i = 'a'; i <= 'z'; i++)
        {
            int l = 0, r = n - 1, count = 0;
            while (l <= r)
            {
                if (s[l] != s[r])
                {
                    if (s[l] == i)
                    {
                        l++;
                        count++;
                    }
                    else if (s[r] == i)
                    {
                        r--;
                        count++;
                    }
                    else
                    {
                        count = INT_MAX;
                        break;
                    }
                }
                else
                {
                    l++, r--;
                }
            }
            ans = min(ans, count);
        }
        if (ans == INT_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}