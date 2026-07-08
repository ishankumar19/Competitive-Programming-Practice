#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
void solve(ll n, ll a, vector<ll>& v, ll& b) {
    ll count_low = 0, count_high = 0;
    for(int i = 0; i < n; i++) {
        if(v[i] < a) count_low++;
        else if(v[i] > a) count_high++;   
    }
    if (count_low > count_high) {
        b = a - 1;
    } else {
        b = a + 1;
    }
    cout << b << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--) {
        ll n, a, b = 0;
        vector<ll> v;
        cin >> n >> a;
        for(ll i = 0; i < n; i++) {
            ll x; 
            cin >> x; 
            v.push_back(x);
        }
        solve(n, a, v, b);
    }
    return 0;
}
