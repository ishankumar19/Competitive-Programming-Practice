#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int solve(int n, int  a[]) {
    int count0 = 0;
    int maxi = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            count0++;
            maxi = max(maxi, count0);
        } else {
            count0 = 0;
        }
    }
    return maxi;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
       int result = solve(n, arr);
       cout << result << endl;
    }
    return 0;
}