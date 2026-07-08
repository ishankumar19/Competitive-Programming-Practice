#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve(ll n , ll k){
    ll odd = (n + 1) / 2;
    if(k <= odd){
        cout << (2*k - 1) << endl;
    }
    else{
        k = k - odd;
        cout << (2*k) << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    solve(n, k);

    return 0;
}
