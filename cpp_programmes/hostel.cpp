#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    ll x;
    cin >> x;
    
    if (x < 2025) {
        cout << "0 1" << endl;
        return 0;
    }
    
    ll offset = x - 2025;
    ll hostel = offset % 4;
    ll S = 100 + 50 * offset;  
    
    vector<ll> good_floors;
    if (hostel == 0) {        
        good_floors = {1};
    } else if (hostel == 1) { 
        good_floors = {0};
    } else if (hostel == 2) { 
        good_floors = {0, 1};
    } else {                  
        good_floors = {1, 3, 5};
    }
    ll good_count = 0;
    ll full_floors = S / 50;
    ll rem = S % 50;
    for (ll gf : good_floors) {
        if (gf < full_floors) {
            good_count += 50;
        } else if (gf == full_floors && rem > 0) {
            good_count += rem;
        }
    }
    if (good_count == 0) {
        cout << "0 1" << endl;
    } else {
        ll g = gcd(good_count, S);
        ll a = good_count / g;
        ll b = S / g;
        cout << a << " " << b << endl;
    }
    
    return 0;
}