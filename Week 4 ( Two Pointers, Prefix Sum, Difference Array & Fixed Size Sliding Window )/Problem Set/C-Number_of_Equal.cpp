// Brute force method
// TC is O(n2)


// #include<bits/stdc++.h>
// using namespace std;
// int main () {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     long long n,m;
//     cin>>n>>m;
//     vector<long long>v1(n),v2(m);
//     for(long long i=0;i<n;i++) {
//         cin>>v1[i];
//     }

//     for(long long i=0;i<m;i++) {
//         cin>>v2[i];
//     }

//     long long count=0;
//     for(long long i=0;i<n;i++) {
//         for(long long j=0;j<m;j++) {
//             if(v1[i]==v2[j]) {
//                 count++;
//             }
//         }
//     }
//     cout<<count<<endl;

//     return 0;
// }



// Optimize method 
// TC is O(n*logn)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n,m;
    cin>>n>>m;
    vector<long long>v1(n),v2(m);
    for(long long i=0;i<n;i++) {
        cin>>v1[i];
    }

    for(long long i=0;i<m;i++) {
        cin>>v2[i];
    }

    map<long long,long long>mp1,mp2;
    for(long long i=0;i<n;i++) {
        mp1[v1[i]]++;
    }
    for(long long i=0;i<m;i++) {
        mp2[v2[i]]++;
    }

    // for(auto val : mp1) {
    //     cout<<val.first<<" -> "<<val.second<<endl;
    // }
    // cout<<endl;
    // for(auto val : mp2) {
    //     cout<<val.first<<" -> "<<val.second<<endl;
    // }
    long long count=0;
    auto it1=mp1.begin(),it2=mp2.begin();
    while( it1 != mp1.end() && it2 != mp2.end() ) {
        if(it1->first == it2->first) {
            count+= (it1->second * it2->second);
            it1++;
            it2++;
        } else if(it1->first > it2->first) {
            it2++;
        } else {
            it1++;
        }
    }
    cout<<count<<endl;

    return 0;
}