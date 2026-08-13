// Brute force version TC is O(n^2).

// #include<bits/stdc++.h>
// using namespace std;
// int main () {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     long long n,target;
//     cin>>n>>target;
//     vector<long long>v(n);
//     for(auto &x:v) {
//         cin>>x;
//     }

//     for(long long i=0;i<n;i++) {  // TC is O(n^2).
//         for(long long j=i+1;j<n;j++) {
//             for(long long k=j+1;k<n;k++) {
//                 if(v[i]+v[j]+v[k]==target) {
//                     cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
//                     break;
//                 }
//             }
//         }
//     }
//     return 0;
// }

// Optimize version TC is O(n^2).

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, target;
    cin >> n >> target;
    vector<pair<long long, long long>> v;
    for (long long i = 1; i <= n; i++)
    {
        long long x;
        cin >> x;
        v.push_back({x, i});
    }
    sort(v.begin(), v.end());
    // 1 2 5 7
    for (int i = 0; i < n; i++)
    {
        long long j = i+1, k = n - 1;
        long long sum;
        while (j < k)
        {
            sum = v[i].first + v[j].first + v[k].first;
            if (sum == target)
            {
                cout << v[i].second << " " << v[j].second << " " << v[k].second << endl;
                return 0;
            }
            else if (sum > target)
            {
                k--;
            }
            else if (sum < target)
            {
                j++;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}