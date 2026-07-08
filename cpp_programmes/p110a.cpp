#include <bits/stdc++.h>
using namespace std;
int main() {
    string a;
    long long count = 0;
    cin >> a;
    for(char ch : a) {
        if(ch == '4' || ch == '7') {
            count++;
        }
    }
    if(count == 4 || count == 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}