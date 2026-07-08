#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
void solve() {
    ll x;
    cin>>x;
    if(x==1){
        cout<<"NO"<<endl;
        return;
    }
    for(ll i=1;i<=cbrt(x);i++){
        ll a = i*i*i;
        ll b = round(cbrt(x - a));
        if(a+b*b*b == x && b>=1 ){
            cout<<"YES"<<endl;
            return;
        }
        b++;
    }
    cout<<"NO"<<endl;
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