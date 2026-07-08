#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n,x,l=0,r=0,ans=0;
    cin>>n>>x;
    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    l=a[0]-x;
    r=a[0]+x;
    for(ll i=1;i<n;i++){
        l=max(l,a[i]-x);
        r=min(r,a[i]+x);
        if(l>r){
        l=a[i]-x;
        r=a[i]+x;
        ans++;
        }
    
    }
    cout<<ans<<endl;
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