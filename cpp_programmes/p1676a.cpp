#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve(string x) {
    ll sumr = 0, suml = 0;

    for(int i = 0; i < 3; i++){
        sumr += x[i] - '0';
    }
    for(int i = 3; i < 6; i++){
        suml += x[i] - '0';
    }

    if(sumr == suml){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}
