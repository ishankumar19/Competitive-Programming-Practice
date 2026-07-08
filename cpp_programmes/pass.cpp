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
       cout<<n%10<<" ";
       for(long long i=10;i<=n;i*=10){
           cout<<(n/i)%10<<" ";
       }
       cout<<endl;
       
}
return 0;
}