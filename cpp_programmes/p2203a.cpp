#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve(int n, int m, int d) {
    int maxHeight = d / m + 1;
    int towers = (n + maxHeight - 1) / maxHeight;
    cout << towers << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n,m,d;
        cin >> n >> m >> d;
        solve(n,m,d);
    }
    return 0;
}