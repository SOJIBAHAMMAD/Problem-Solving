
// Brute force method. TC is O(N)
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main () {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);

//    int n;
//    cin>>n;
//    bool flag=true;
//    if(n==1) {
//       flag = false;
//    }
//    for(int i=2;i<=n-1;i++) {
//     if(n%i==0) {
//         flag=false;
//         break;
//     }
//    }
//    if(flag) {
//     cout<<n<<" is Prime"<<endl;
//    } else {
//     cout<<n<<" is not prime"<<endl;
//    }
//    return 0;
// }


// Optimize method. TC is O(sqrt(N))
#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool isPrime(int n) {
    if(n==1) {
        return false;
    }
    for(int i=2;i*i<=n;i++) {
        if(n%i==0) {
            return false;
        }
    }
    return true;
}
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   cin>>n;
   bool ans=isPrime(1);
   if(ans) {
    cout<<n<<" is prime number"<<endl;
   } else {
    cout<<n<<" is not prime number"<<endl;
   }
   return 0;
}