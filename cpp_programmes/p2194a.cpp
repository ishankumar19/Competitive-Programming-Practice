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
        ll n,w;
        cin>>n>>w;
        if(n==0){
            cout<<'0'<<endl;
            return 0;
        }
        else{
        ll kept = n/w;
        ll removed = n-kept;
        cout<<removed<<endl;
        }
    
}
return 0;
}

