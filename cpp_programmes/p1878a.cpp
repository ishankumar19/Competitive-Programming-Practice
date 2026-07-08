#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve(ll n, ll k, vector<ll> &v) {
    ll count=0;
    for(ll i=0;i<n;i++){
        if(v[i]==k){
            count++;
        }
    }
    if(count==0){
        cout<<"NO"<<endl;
    }
    else if(n==2 && count==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while(t--) {
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
        cin>>v[i];
        }
       solve(n, k, v);
    }
    return 0;
}