#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    vector<string> r;

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] <= 1399) {
            r.push_back("Division 4");
        }
        else if(arr[i] <= 1599) {
            r.push_back("Division 3");
        }
        else if(arr[i] <= 1899) {
            r.push_back("Division 2");
        }
        else {
            r.push_back("Division 1");
        }
    }

    for(int i = 0; i < r.size(); i++) {
        cout << r[i] << endl;
    }

    return 0;
}
