// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define nl '\n'
// int main () {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);

//    int n;
//    cin>>n;
//    vector<pair<int,int>>duration(n);
//    for(int i=0;i<n;i++) {
//     cin>>duration[i].first>>duration[i].second;
//     swap(duration[i].first,duration[i].second);
//    }
//    sort(duration.begin(),duration.end());

//    int count=0,last_end=-1;
//    for(auto [end,start] : duration) {
//     if ( start >= last_end ) {
//         count++;
//         last_end = end;
//     } 
//    }
//    cout<<count<<nl;
//    return 0;
// }


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

bool cmp(pair<int,int>a , pair<int,int>b) {
    return a.second < b.second ;
}
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   cin>>n;
   vector<pair<int,int>> duration(n);
   for(int i=0;i<n;i++) {
    cin>>duration[i].first >> duration[i].second;
   }
   sort(duration.begin(),duration.end(),cmp);


// Without using cmp function we can use this lambda function to sort pair accroding to 2nd element

//    sort(duration.begin(),duration.end(), [](auto &a,auto &b) {
//         return a.second < b.second;
//    });

   // 3 5
   // 5 8
   // 4 9
   int count=1;
   int last_end=duration[0].second;
   for(int i=1;i<n;i++) {
    if(duration[i].first >= last_end) {
        count++;
        last_end = duration[i].second;
    }
   }
   cout<<count<<nl;
   return 0;
}

