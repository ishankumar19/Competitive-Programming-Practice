#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve(){
    vector<ll> v(3);
    for(ll i=0;i<3;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    cout<<min(v[2]-v[1],v[1]-v[0])<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}