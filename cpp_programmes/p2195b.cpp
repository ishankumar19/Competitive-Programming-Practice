#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void check(vector<ll> &a, ll n){
    for(int i = 0; i < n-1; i++){
        if(a[i] > a[i+1]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;

        vector<ll> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 1; i < n; i++){
            if(a[0] == 1){
                if(a[i] > a[2*i]){
                    swap(a[i], a[2*i]);
                }
                check(a, n);
            }
        }
    }
    return 0;
}
