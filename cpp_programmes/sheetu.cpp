#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;
    int dot = n.find('.');
    if (dot == -1) {
        cout << "int " << n;
        return 0;
    }
    string intPart = n.substr(0, dot);
    string decPart = n.substr(dot + 1);
    if (stoi(decPart) == 0) {
        cout << "int " << intPart;
    } else {
        cout << "float " << intPart << " 0." << decPart;
    }
    return 0;
}
