#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve(ll n, vector<ll> &v) {
    ll n2 = 0;

    for(ll i = 0; i < n; i++){
        if(v[i] == 2) n2++;
    }

    if(n2 % 2 != 0){
        cout << "-1" << endl;
        return;
    }

    if(n2 == 0){
        cout << 1 << endl;
        return;
    }

    ll need = n2 / 2;
    ll cnt = 0;

    for(ll i = 0; i < n; i++){
        if(v[i] == 2) cnt++;

        if(cnt == need){
            cout << i + 1 << endl; 
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;

        vector<ll> v(n);
        for(ll i = 0; i < n; i++){
            cin >> v[i];
        }

        solve(n, v);
    }

    return 0;
}