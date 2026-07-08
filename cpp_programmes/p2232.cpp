#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
//time complexity = O(nlogn)
void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin>>a[i];//n
    
    sort(a.begin(),a.end());//logn 
    ll mid_point=n/2;

    ll target=a[mid_point];
    ll left=0,right=0;

    for(ll i=0;i<n;i++){
        if(a[i]<target) left++;
        else if(a[i]>target) right++;

    }
    cout<<max(left,right)<<endl;
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