#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long arr[5][5] = {
    {1, 2, 9, 10, 25},
    {4, 3, 8, 11, 24},
    {5, 6, 7, 12, 23},
    {16, 15, 14, 13,22},
    {17, 18, 19, 20, 21}
};
    long long t;
    cin >> t;
    while(t--) {
        int y,x;
        cin>>y>>x;
        cout<<arr[y-1][x-1]<<endl;
    }
    return 0;
}