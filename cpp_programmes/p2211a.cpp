#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while(t--) {
        long long n;
        cin>>n;
        vector<long long> v(n);
        for(long long i=0;i<n;i++){
            cin>>v[i];
        }
        if(n==1){
            cout<<1<<endl;
        }
        else{
            for(long long i=0;i<n;i++){
                cout<<2<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}