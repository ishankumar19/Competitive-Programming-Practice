#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n,p;
    cin>>n>>p;
    vector<pair<ll,ll>> res(n);
    vector<ll>a(n),b(n);
    for(int i=0; i<n ;i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    for(int i=0; i<n; i++){
        res[i]={ b[i] , a[i]};
    }
    sort(res.begin(),res.end());
    ll cost=p;
    ll info_shared=1;
    while(info_shared!=n){
        ll i=0;
        if(res[i].first<p){
            cost+=res[i].first;
            info_shared+=res[i].second;
        }
        i++;
    }
    cout<<cost<<endl;
    
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