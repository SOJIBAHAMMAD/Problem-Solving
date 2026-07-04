#include<bits/stdc++.h>
using namespace std;
int main () {
    long long N;
    cin>>N;
    long long total_sum=(N*(N+1))/2;
    long long sum=0;
    for(int i=0;i<N-1;i++) {
        long long val;
        cin>>val;
        sum+=val;
    }
    cout<<total_sum-sum<<endl;

    return 0;
}