#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int solve(ll a,ll b) {
    int count=0;
    while(a>0){
        if(a>b){
            a=a/b;
            count++;
        }
        else{
            a++;
            count++;
        }
    }
    return count;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while(t--) {
    ll a,b;
    cin>>a>>b;
    ll result=solve(a,b);
    cout<<result<<endl;
    }
    return 0;
}