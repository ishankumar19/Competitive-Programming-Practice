#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int solve(int arr[], int n) {
    int minimum=*min_element(arr, arr + n);
    if(arr[0]==minimum){
        return 1;
    }
    else{
        return 0;
    }
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
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
       int result = solve(arr, n);
       if(result == 1) {
           cout << "YES" << endl;
       } else {
           cout << "NO" << endl;
       }
    }
    return 0;
}