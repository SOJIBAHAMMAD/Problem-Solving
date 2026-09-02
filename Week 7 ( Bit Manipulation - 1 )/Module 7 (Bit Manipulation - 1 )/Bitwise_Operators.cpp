#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int a=5,b=14;
   // a=5   -> 0101
   // b=14  -> 1110
   // (a&b) -> 0100 that means 4 (decimal)
   // AND operation
   cout<<(a&b)<<endl;
   // OR operation
   cout<<(a|b)<<endl;
   // XOR operation ( if 1 is odd amount then ans is 1 else 0)
   cout<<(a^b)<<endl;
   // Left Shift 1 times
   cout<<(11 << 1)<<endl;
   // Left Shift 2 times
   cout<<(11 << 2)<<endl;
   // Right shift 1 times
   cout<<(11 >> 1)<<endl;
   // Right Shift 2 times
   cout<<(11 >> 2)<<endl;
   return 0;
}