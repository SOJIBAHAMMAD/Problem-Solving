#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //pair<string,int>student={"Sajib",10};
    //cout<<student.first<<" "<<student.second<<endl;


    int n;
    cin>>n;
    pair<string,int>student[n];
    for(int i=0;i<n;i++) {
        cin>>student[i].first>>student[i].second;
    }
    for(int i=0;i<n;i++) {
        cout<<student[i].first<<" "<<student[i].second<<endl;
    }
    return 0;
}