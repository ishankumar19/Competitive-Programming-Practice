#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, m, k;
    cin >> n >> m >> k;
    long long count = 0;
    long long t1 = min({n, m, k});
    n -= t1;
    m -= t1;
    k -= t1;
    count += t1;
    long long t2 = min({n / 2, m, k});
    n -= 2 * t2;
    m -= t2;
    k -= t2;
    count += t2;
    long long t3 = min(n / 2, k);
    n -= 2 * t3;
    k -= t3;
    count += t3;

    cout << count;
    return 0;
}
