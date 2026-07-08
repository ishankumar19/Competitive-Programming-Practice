#include <iostream>
using namespace std;
int main() {
    // Optimize standard I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m, k;
    cin >> m >> k;
    int max = m - k + 1;
    cout << max<< endl;
    return 0;
}