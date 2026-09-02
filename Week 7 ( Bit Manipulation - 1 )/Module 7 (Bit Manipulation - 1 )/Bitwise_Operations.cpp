#include<bits/stdc++.h>
using namespace std;
#define ll long long

// Q1 -> Check Kth bit on or off
// Q2 -> Print on or off bits
// Q3 -> Turn on Kth bit
// Q4 -> Turn off Kth bit
// Q5 -> Toggle Kth bit

int Turn_on_Kth_bit(int n,int k) {
    return ((1 << k) | n);
}
int Turn_off_Kth_bit(int n,int k) {
    return ((~(1 << k)) & n);
}
int Check_Kth_bit_on_or_off(int n,int k) {
    return ((n >> k)&1);
}
int Toggle_Kth_bit(int n,int k) {
    return (n ^ (1 << k));
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
   
   //    int n,k;
   //    cin>>n>>k;
   //bool ans = Check_Kth_bit_on_or_off(n,k);
   print_on_and_off_bit(39);
   cout<<Turn_on_Kth_bit(45,4)<<endl;
   cout<<Turn_off_Kth_bit(45,3)<<endl;
   cout<<Toggle_Kth_bit(45,4)<<endl;
   return 0;
}
