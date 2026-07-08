#include <iostream>
using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;
    long long result = (a * b) % 100;
    result = (result * c) % 100;
    result = (result * d) % 100;
    if(result < 10) {
        cout << "0" << result;
    } else {
        cout << result;
    }
    
    return 0;
}