#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n;
cin >> n;
ll arr[n][n];
for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
        arr[i][j] = (i + 1) * (j + 1);
    }
}
ll killed = arr[0][0];
int i = 0, j = 0;
while(i != n - 1 || j != n - 1) {
    if(i + 1 < n) {
        i++;
        killed += arr[i][j];
    }
    if(j+1<n){
        j++;
        killed+=arr[i][j];
    }
}
cout <<(killed*2022)%<< endl;
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