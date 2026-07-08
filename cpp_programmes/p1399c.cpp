#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int solve() {
    long long n,k=0;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    
for(int r = n-1; r >= 1; r--){
    int s = a[0] + a[r];  
    int l = 0, right = n-1;
    ll count = 0;
    while(l < right){
        int sum = a[l] + a[right];
        if(sum == s){
            count++;
            l++;
            right--;
        }
        else if(sum < s) l++;
        else right--;
    }
    
    k = max(k, count);
}

    return k;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while(t--) {
       ll r=solve();
       cout<<r<<endl;
    }
    return 0;
}