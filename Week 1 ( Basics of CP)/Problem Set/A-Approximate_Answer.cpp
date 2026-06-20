#include <bits/stdc++.h>
using namespace std;

int main() {
	int X,Y,K;
	cin>>X>>Y>>K;
	int ans=abs(X-Y);
	if(ans<=K) {
	    cout<<"YES"<<endl;
	} else {
	    cout<<"NO"<<endl;
	}
}
