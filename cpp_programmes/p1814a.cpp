#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve(ll n , ll k) {
    if(n%2==0 || (n-k)%2==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while(t--) {
        ll n,k;
        cin>>n>>k;
        solve(n,k);
    }
    return 0;
}