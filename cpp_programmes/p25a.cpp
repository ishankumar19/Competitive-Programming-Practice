#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll> even;
    vector<ll> odd;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            even.push_back(i+1);
        }
        else{
            odd.push_back(i+1);
        }
    }
    if(even.size() > odd.size()){
        cout<<odd[0];
    }
    else{
        cout<<even[0];
    }
    
    return 0;
}