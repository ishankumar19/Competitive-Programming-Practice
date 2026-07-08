#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    long long half = (n + 1) / 2;
    
    if (n % 2 == 0) {
        cout << half << endl;
    } else {
        cout << -half << endl;
    }
    
    return 0;
}