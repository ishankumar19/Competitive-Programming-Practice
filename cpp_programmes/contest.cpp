#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int solve(int arr[], ll n, ll s, ll x) {
    ll sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    if(sum == s){
        return 1;
    }
    else if(sum > s){
        return -1;
    }
    else{
        if(x == 0) return -1; 

        while(sum < s){
            sum += x;
            if(sum == s){
                return 1;
            }
            else if(sum > s){
                return -1;
            }
        }
    }

    return -1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--) {
        ll n, s, x;
        cin >> n >> s >> x;

        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int result = solve(arr, n, s, x);

        if(result == 1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
