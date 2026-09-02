#include<bits/stdc++.h>
using namespace std;
#define ll long long

int Check_Kth_bit_on_or_off(int n,int k) {
    return ((n >> k)&1);
}

void print_on_and_off_bit(int n) {
    for(int k=31;k>=0;k--) {
        if(Check_Kth_bit_on_or_off(n,k)) {
            cout<<"1"<<" ";
        } else {
            cout<<"0"<<" ";
        }
    }
    cout<<endl;
}
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   print_on_and_off_bit(39);
   cout<<__builtin_popcount(39)<<endl; // Give total on bit
   cout<<__lg(39); // Give most significant bit (MSB)
   
   return 0;
}