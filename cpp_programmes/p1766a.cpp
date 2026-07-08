#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int solve(ll n) {
    int cnt = 0;
    while (n > 0) {
        if (n % 10 != 0) cnt++;
        n /= 10;
    }
    return cnt == 1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll count = 0;
        for (ll i = 1; i <= n; i *= 10) {
            for (int d = 1; d <= 9; d++) {
                if (d * i <= n) count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
