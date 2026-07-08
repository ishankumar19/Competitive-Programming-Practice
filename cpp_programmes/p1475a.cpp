#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int solve(ll n) {
    if(n & (n - 1)) return 1;   
    else return 0;              
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;

        ll x = solve(n);

        if(x > 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
