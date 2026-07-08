#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int dot_count = 0;
        for(char c : s) {
            if(c == '.') dot_count++;
        }
        bool found_three = false;
        for(int i = 0; i <= n - 3; i++) {
            if(s[i] == '.' && s[i+1] == '.' && s[i+2] == '.') {
                found_three = true;
                break;
            }
        }
        if(dot_count == 0) {
            cout << 0 << "\n";
        }
        else if(found_three) {
            cout << 2 << "\n";
        }
        else {
            cout << dot_count << "\n";
        }
    }
    return 0;
}
