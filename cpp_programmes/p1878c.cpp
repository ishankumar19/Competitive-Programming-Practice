#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve(){
    ll n,k,x;
    cin>>n>>k>>x;
    ll minimum_sum=(k*(k+1))/2;
    ll maximum_sum=(n*(n+1))/2 -((n-k)*(n-k+1))/2;
    if(x>= minimum_sum && x<=maximum_sum)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}