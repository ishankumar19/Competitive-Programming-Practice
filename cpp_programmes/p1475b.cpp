#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int y = n % 2020;

        if (y <= n / 2021)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
