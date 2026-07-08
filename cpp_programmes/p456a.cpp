#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
void solve(){
    long long n;//number of laptops
    cin>>n;
    vector<pair<ll,ll>> x(n);
    for(ll i=0;i<n;i++){
        cin>>x[i].first>>x[i].second;// first =a second = b
    }
    sort(x.begin(),x.end());
    for(ll i=0;i<n-1;i++){
        if(x[i].second>x[i+1].second){//here we are comparing b values
            cout<<"Happy Alex";
            return;
        }
    }
cout<<"Poor Alex";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}