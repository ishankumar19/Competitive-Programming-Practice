#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n,k,sum0=0,sum1=0,x=0,target=0;
    cin >> n >> k;
    vector<ll> a(n);
    
    for(ll i=0; i<n; i++) {
        cin >> a[i];
        if(a[i]==0) {
            sum0++;
        }
        else {
            sum1++;
        }
    }
    cin>>x;
    target = a[x];
    if(k==1){
        if(n%2==0){
            cout<<sum0+2<<endl;
        }
        else if(sum0==0){
            cout<<0<<endl;
        }
        else{
            cout<<sum0+1<<endl;
    }
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