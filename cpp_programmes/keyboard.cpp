#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;

        if(n <= 5 && k % 2 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}