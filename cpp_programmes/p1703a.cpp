#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to clear newline after t

    vector<string> r;

    for(int i = 0; i < t; i++) {
        string s;
        getline(cin, s);

        // convert to lowercase
        string temp = s;
        for(char &c : temp) {
            c = tolower(c);
        }

        if(temp == "yes")
            r.push_back("YES");
        else
            r.push_back("NO");
    }

    for(string x : r) {
        cout << x << endl;
    }

    return 0;
}
