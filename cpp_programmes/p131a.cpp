#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    int upper = 0, lower = 0;
    int length = n.length();
    for (int i = 0; i < length; i++) {
        if (isupper(n[i])) {
            upper++;
        } else if (islower(n[i])) {
            lower++;
        }
    }
    if (islower(n[0]) && upper == length - 1) {
        n[0] = toupper(n[0]);
        for (int i = 1; i < length; i++) {
            n[i] = tolower(n[i]);
        }
        cout << n << endl;
    }
    else if (upper == length) {
        for (int i = 0; i < length; i++) {
            n[i] = tolower(n[i]);
        }
        cout << n << endl;
    }
    else {
        cout << n << endl;
    }

    return 0;
}