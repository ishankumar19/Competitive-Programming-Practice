#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll a,b;
    cin>>a>>b;
    ll current_a=a,current_b=0;
    ll hours=0;
    while(current_a>0){
        hours+=current_a;
        current_b+=current_a;
        current_a = current_b/b;
        current_b= current_b % b;
    }
    cout<<hours<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}