#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve(int x , int y) {
    cout<<min(x,y)<<' '<<max(x,y)<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while(t--) {
        int x,y;
        cin>>x>>y;
       solve(x,y);
    }
    return 0;
}