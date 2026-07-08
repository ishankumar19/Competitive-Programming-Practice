#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    if(n % 2 == 0){
        cout << 4 << " " << n - 4 << endl;
    }
    else{
        cout << 9 << " " << n - 9 << endl;
    }

    return 0;
}
