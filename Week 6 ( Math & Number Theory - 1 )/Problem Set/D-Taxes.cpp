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
            break;
        }
    }
    return true;
}
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   /*
    Goldbach conjecture -> every even integer greater than 2 can be 
    expressed as the sum of two prime numbers.
   */

   int n;
   cin>>n;
   if(isPrime(n)) {  // It has only two divisor 1 and itself.So will obously choose 1.
    cout<<1<<endl;
   } else if(n%2==0) {  // we can express it will to prime number then will we get 2 as ans.
    cout<<2<<endl;
   } else if(n%2==1) {
    int x=n-2;
    if(isPrime(x)) {
        cout<<2<<endl;
    } else {
        cout<<3<<endl;
    }
   }
   return 0;
}