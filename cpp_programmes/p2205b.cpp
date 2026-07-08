#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll power(ll a, ll b){
    ll res = 1;
    while(b--){
        if(res > (ll)1e18 / a) return (ll)1e18;
        res *= a;
    }
    return res;
}

void solve(ll n) {
    for(ll i=2;i<=n;i++){
        ll p = power(i,n);
        if(p>n) break;
        if(n%p==0){
            cout<<i<<"\n";
            return;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        solve(n);
    }
}