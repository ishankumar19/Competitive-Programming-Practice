#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,x=0,y=0,z=0;
    cin >> n;
    ll arr[n][3];//n==100
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < 3; j++) {
            //
            cin >> arr[i][j]; //input
            if(j == 0){
                x += arr[i][j];
            }
            else if(j == 1){
                y += arr[i][j];
            }
            else{
                z += arr[i][j];
            }
        }
    }
    if(x == 0 && y == 0 && z == 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}