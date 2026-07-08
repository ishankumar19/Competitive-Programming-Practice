#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
//O(N)
void solve() {
    ll n,two=0,one=0;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==2){
            two++;
        }
        else if(a[i]==1){
            one++;
        }
    }
    long long sum=2*two+one; // we are checking the number of 2 and 1 gram candies
    if(one==0 && two%2!=0){
        cout<<"NO"<<endl;
    }
    else if(sum%2!=0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;//test cases
    while(t--) {
       solve();
    }
    return 0;
}