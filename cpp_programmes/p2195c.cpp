#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--) {

        ll n;
        cin >> n;

        vector<ll> a(n);

        for(int i = 0; i < n; i++){   
            cin >> a[i];
        }

        ll count = 0;   

        for(int i = 0; i < n-1; i++){   

            if(a[i]==6 && a[i+1]==1){
                count++;
            }
            else if((a[i]==4 && a[i+1]==3) || a[i+1]==4){
                count++;
            }
            else if((a[i]==3 && a[i+1]==4) || a[i+1]==3){
                count++;
            }
            else if((a[i]==2 && a[i+1]==5) || a[i+1]==2){
                count++;
            }
            else if((a[i]==5 && a[i+1]==2) || a[i+1]==5){
                count++;
            }
            else if(a[i]==4 && a[i+1]==6){
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
