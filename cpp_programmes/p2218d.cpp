#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
bool isPrime(ll x){
    if(x < 2) return false;
    for(ll i = 2; i * i <= x; i++){
        if(x % i == 0) return false;
    }
    return true;
}
void solve() {
    ll n;
    cin >> n;
    vector<ll> prime, nonprime;
    ll num = 2;
    while(prime.size() < n || nonprime.size() < n){
        if(isPrime(num)) prime.push_back(num);
        else nonprime.push_back(num);
        num++;
    }
    ll p = 0, np = 0;

    for(ll i = 0; i < n; i++){
        if(i % 2 == 0){
            cout << nonprime[np++] << " ";
        }
        else{
            cout << prime[p++] << " ";
        }
    }

    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    while(t--) {
        solve();
    }
    return 0;
}