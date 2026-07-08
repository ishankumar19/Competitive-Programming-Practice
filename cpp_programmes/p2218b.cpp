#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll sum=0;
    vector<ll> v(7);

    for(int i = 0; i < 7; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for(int i=0;i<6;i++){
        v[i]*=-1;
        sum+=v[i];
    }
    cout << sum+v[6] << endl;
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