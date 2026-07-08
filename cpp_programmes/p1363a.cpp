#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
void solve() {
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    ll odd = 0, even = 0;

    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] % 2 == 1) {
            odd++;
        } else {
            even++;
        }
    }
    bool possible = false;
    for(ll i = 1; i <= odd && i <= x; i += 2) {
        if(even >= (x - i)) {
            possible = true;
            break;
        }
    }
    if(possible) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t = 1;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}