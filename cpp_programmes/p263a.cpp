#include <bits/stdc++.h>
using namespace std;

int main() {
    int matrix[5][5];
    int a = 0, b = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] == 1) {
                a = i;
                b = j;
                break;
            }
        }
    }

    // Calculate distance to center (2,2)
    int r = abs(a - 2) + abs(b - 2);

    cout << r << endl;

    return 0;
}