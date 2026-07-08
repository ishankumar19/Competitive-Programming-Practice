#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    sort(n.begin(), n.end());

    vector<char> r;

    for (char x : n) {
        if (isdigit(x)) {
            r.push_back(x);
        }
    }

    for (int i = 0; i < r.size(); i++) {
        cout << r[i];
        if (i != r.size() - 1) {
            cout << "+";
        }
    }

    return 0;
}