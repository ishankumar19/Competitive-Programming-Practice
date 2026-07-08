#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
void solve(){
    ll n,c;
    cin>>n>>c;
    vector<ll> cost(n);
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        cost[i]=x+(i+1);
    }
    sort(cost.begin(),cost.end());
    ll count=0;//keep a tracks doors that i can open 
    for(int i=0;i<n;i++){
        if(cost[i]<=c){
            c-=cost[i];
            count++;
        }
        else{
            break;
        }
    }
    cout<<count<<endl;
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