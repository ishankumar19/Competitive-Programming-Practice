#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve(ll n , vector<ll> &v) {
    ll countn = 0, countp = 0;

    for(ll i = 0; i < n; i++){
        if(v[i] == -1) countn++;
        else countp++;
    }
    ll ops = 0;
    while(countp < countn){
        countp++;
        countn--;
        ops++;
    }
    if(countn % 2 != 0){
        ops++;
    }

    cout << ops << endl;
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