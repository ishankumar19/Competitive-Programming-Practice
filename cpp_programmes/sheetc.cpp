#include <iostream>
using namespace std;

long long sum(long long x, long long y) {
    return x + y;
}

long long mult(long long x, long long y) {
    return x * y;
}

long long sub(long long x, long long y) {
    return x - y;
}

int main() {
    long long a, b;
    cin >> a >> b;
    
    cout << a << " + " << b << " = " << sum(a, b) << endl;
    cout << a << " * " << b << " = " << mult(a, b) << endl;
    cout << a << " - " << b << " = " << sub(a, b) << endl;
    
    return 0;
}