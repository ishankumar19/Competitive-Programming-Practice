#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    ll n;
    cin>>n;
    vector<ll> a(n),b(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<n;i++){
        b[i]=abs(a[i]);
    }
    sort(b.begin(),b.end());
    for(ll i=0;i<n;i++){
        if(b[i]==0){
            cout<<b[i]<<endl;
            return 0;
        }
        else{
            cout<<abs(b[i])<<endl;
            return 0;
        }
        
    }
    return 0;
}