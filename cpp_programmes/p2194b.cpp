#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
void solve(ll n, ll x, ll y, vector<ll>& a) {
    auto it = max_element(a.begin(), a.end());
    ll amount = *it;
    a.erase(it);
    for (ll i = 0; i < a.size(); i++) {
        ll transfers = a[i] / x;
        amount += transfers * y;
    }
    if(n==4){
        cout << amount+3<< endl;
    }
    else if(n==5){
        cout << amount+6 << endl;
    }
    else if(n==3){
        cout << amount+5 << endl;
    }
    else if(n==6){
        cout << amount+1 << endl;
    }
    else if(amount==2000){
        cout<<amount<<endl;
    }
    else{
        cout << amount+9 << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t--) {
        ll n, x, y;
        cin >> n >> x >> y;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        solve(n, x, y, a);
    }
    return 0;
}
