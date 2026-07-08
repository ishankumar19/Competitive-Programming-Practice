#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n;
        cin >> n;
        vector<ll> p(n + 1);
        for (ll i = 1; i <= n; i++) {
            cin >> p[i];
        }
        ll count = 0;
        for (ll i = 1; i <= n; i++) {
            if (p[i] <= i) {
                count++;
            }
        }
        cout << count << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}