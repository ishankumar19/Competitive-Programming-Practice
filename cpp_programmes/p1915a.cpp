#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while(t--) {
        ll a,b,c;
        cin>>a>>b>>c;
        if(a==b && b!=c){
            cout<<c<<endl;
        }
        else if(a==c && b!=c){
            cout<<b<<endl;
        }
        else if(b==c && c!=a){
            cout<<a<<endl;
        }
    }
    return 0;
}