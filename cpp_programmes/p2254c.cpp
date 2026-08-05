#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve(){
    ll n;
    cin >> n;

    string a,b;
    cin >> a >> b;

    ll evenA=0, oddA=0;
    ll evenB=0, oddB=0;

    for(ll i=0;i<n;i++){
        if(a[i]=='1'){
            if(i%2==0)
                evenA++;
            else
                oddA++;
        }

        if(b[i]=='1'){
            if(i%2==0)
                evenB++;
            else
                oddB++;
        }
    }

    if(evenA==evenB && oddA==oddB)
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