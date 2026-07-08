#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while(t--) {
        ll n,k,odd=0,ans=0;
        cin>>n>>k;
        vector<ll> a(n);
        odd=pow(2,k);
        while(k--){
            if(n%2==0){
                ans =(2*n)+1;
                a.push_back(ans);
            }
            else{
                ans =(n/odd);
                a.push_back(ans);
            }
        }
        sort(a.begin(),a.end());
        cout<<a[0]<<endl;
    }
    return 0;
}