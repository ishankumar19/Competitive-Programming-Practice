#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
void solve() {
    long long n,m;
    cin>>n>>m;
    ll ans=min(n,m);
    if(ans%2==0){
        cout<<"Malvika"<<endl;
    }
    else{
        cout<<"Akshat"<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
       solve();
    return 0;
}