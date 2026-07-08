#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while(t--) {
        ll sa,sb,da=0,db=0;
        cin>>sa>>sb;
        if(sa==sb){
            da=db=1;
        }
        else{
            da=sa;
            db=sb;
        }
        cout<<da<<" "<<db<<endl;
       solve();
    }
    return 0;
}