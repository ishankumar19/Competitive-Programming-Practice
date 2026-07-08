#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);
    unordered_set<char> st;
    for (char c : s) {
        if (isalpha(c)) {
            st.insert(tolower(c));
        }
    }
    cout << (st.size() == 26 ? "YES" : "NO") << endl;
    return 0;
}