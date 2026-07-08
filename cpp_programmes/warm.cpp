#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<pair<long long,long long>> v;
    for(int i=0;i<n-1;i++){
        long long diff = abs(a[i+1] - a[i]);
        v.push_back({diff, i});
    }
    sort(v.begin(), v.end());
    cout<<v[0].second + 1<<endl;
    return 0;
}