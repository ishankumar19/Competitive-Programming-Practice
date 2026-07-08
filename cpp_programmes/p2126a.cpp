#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    int x,smallest=9;
    cin>>x;
    while(x>0){
        ll digit=x%10;
        if(digit<smallest){
            smallest=digit;
        }
        x=x/10;
    }
    cout<<smallest<<endl;
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