#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n,k,sum=0,sumk=0;
    cin >> n >> k;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) {
        cin >> a[i];
        sum+=a[i];
        a[i]=k;
        sumk+=a[i];
    }
    if(sum%2==1 || sumk%2==0 ) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
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